##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=dynamicallly_creating_objects
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Lohit/Desktop/code/decision_machine
ProjectPath            :=C:/Users/Lohit/Desktop/code/decision_machine/dynamicallly_creating_objects
IntermediateDirectory  :=../build-$(ConfigurationName)/dynamicallly_creating_objects
OutDir                 :=../build-$(ConfigurationName)/dynamicallly_creating_objects
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Lohit
Date                   :=14/09/2019
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            := -static-libgcc -static-libstdc++ 
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS := -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/dynamicallly_creating_objects/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\dynamicallly_creating_objects" mkdir "..\build-$(ConfigurationName)\dynamicallly_creating_objects"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\dynamicallly_creating_objects" mkdir "..\build-$(ConfigurationName)\dynamicallly_creating_objects"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/dynamicallly_creating_objects/.d:
	@if not exist "..\build-$(ConfigurationName)\dynamicallly_creating_objects" mkdir "..\build-$(ConfigurationName)\dynamicallly_creating_objects"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(ObjectSuffix): Player.cpp ../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Lohit/Desktop/code/decision_machine/dynamicallly_creating_objects/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(DependSuffix): Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(DependSuffix) -MM Player.cpp

../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(PreprocessSuffix): Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/dynamicallly_creating_objects/Player.cpp$(PreprocessSuffix) Player.cpp

../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Lohit/Desktop/code/decision_machine/dynamicallly_creating_objects/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/dynamicallly_creating_objects/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/dynamicallly_creating_objects//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


