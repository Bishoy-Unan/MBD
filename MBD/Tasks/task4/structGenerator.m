%structure
%create structer


%element one
elem(1) = Simulink.BusElement;
elem(1).Name = 'var1';
elem(1).DataType = 'uint8';

%element otwo
elem(2) = Simulink.BusElement;
elem(2).Name = 'var2';
elem(2).DataType = 'uint16';

%element three
elem(3) = Simulink.BusElement;
elem(3).Name = 'var3';
elem(3).DataType = 'double';

Fault = Simulink.Bus ;
Fault.Elements = elem ;



