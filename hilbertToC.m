%real time processing tutorial : 동국대 강의
%https://www.youtube.com/watch?v=IBLctf5cLXk&list=PL6pIJey4p082UCNCztqECMyoBWZ_baIm6&index=6


function y = hilbertToC(x)
%#codegen
    y = hilbert(x);
end


%code gen fun
%codegen hilbertToC -args {randn(360*10,1)}
