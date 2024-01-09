% Demo code to build a traffic light.
 % Clear the command window.
clc;   
clearvars;
close all
% Make sure the workspace panel is showing.
workspace;  
format long g;
format compact;
% Make the background as a rounded rectangle
% with pure black ('k') color.
rectangle(...
	'Position', [0 0 2 4], ...
	'Curvature', 0.2, ...
	'FaceColor', 'k')
axis equal
hold on;
% Define dark gray colors - color when that light is off.
darkGray = [0.2, 0.2, 0.2];
% Define the green, yellow, and red lamp colors.
% Colors need to be in the range 0-1, so if you get them
% from Photoshop or somewhere in uint8 values, besure to divide by 255.
% Look up "Traffic Green", "Traffic Yellow", and "Traffic Red"
green = [0, 132, 80] / 255;
yellow = [239, 183, 0] / 255;
red = [184, 29, 19] / 255;
% Put up the three dark gray "off" lights.
pos = [0.5 2.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 1.5 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 0.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
% uiwait(helpdlg('This where all are "off"'));
% Place 3 circles.  Normally only one is on.  
% Pick the one you want to be on, and 
% don't call rectangle for the ones you want to be off.
while true
%red color on and yellow off and green off
pos = [0.5 2.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', red)
pos = [0.5 1.5 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 0.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
title('Traffic Lights', 'FontSize', 24);
xlim([-0.5, 2.5]);
ylim([-0.5, 4.5]);
pause(3);
%red color off and yellow on and green off
pos = [0.5 2.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 1.5 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', yellow)
pos = [0.5 0.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
title('Traffic Lights', 'FontSize', 24);
xlim([-0.5, 2.5]);
ylim([-0.5, 4.5]);
pause(2);
%red color off and yellow off and green on
pos = [0.5 2.75 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 1.5 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', darkGray)
pos = [0.5 0.25 1 1]; 
rectangle('Position', pos, 'Curvature',[1 1], 'FaceColor', green)
title('Traffic Lights', 'FontSize', 24);
xlim([-0.5, 2.5]);
ylim([-0.5, 4.5]);
pause(3);
end