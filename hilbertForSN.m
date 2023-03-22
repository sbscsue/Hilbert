

FrameSize = 360*1;
Fs = 360;

%data read(by csv)
data = readmatrix("sn_convTwo.csv");
%data frame별로 처리 
sig = dsp.SignalSource(data,FrameSize);

%plot 추가 
scopeTimeDomain = timescope('SampleRate',Fs);
scopeFsDomain = dsp.SpectrumAnalyzer('SampleRate',Fs);

for i = 1 : FrameSize
    x = sig();
    %https://kr.mathworks.com/help/signal/ug/hilbert-transform.html
    y = hilbert(x);
    
    scopeTimeDomain(y);  %time domain plot
    scopeFsDomain(y);    %fs domain plot 
end
release(scopeFsDomain);