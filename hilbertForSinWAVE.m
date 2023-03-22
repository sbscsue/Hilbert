%real time processing tutorial : 동국대 강의
%https://www.youtube.com/watch?v=IBLctf5cLXk&list=PL6pIJey4p082UCNCztqECMyoBWZ_baIm6&index=6

%사용함수
%https://kr.mathworks.com/help/signal/ug/hilbert-transform.html

FrameSize = 360;
Fs = 360;

Sineobject1 = dsp.SineWave('SampleRate',Fs,'Frequency',25);
Sineobject2 = dsp.SineWave('SampleRate',Fs,'Frequency',50);
Sineobject1.SamplesPerFrame=FrameSize;
Sineobject2.SamplesPerFrame=FrameSize;

scopeTimeDomain = timescope('SampleRate',Fs);
scopeFsDomain = dsp.SpectrumAnalyzer('SampleRate',Fs);

for i = 1 : FrameSize
    x = Sineobject1();
    y = hilbert(x);
    
    scopeTimeDomain(y);
    scopeFsDomain(y);
end
release(scopeFsDomain);

