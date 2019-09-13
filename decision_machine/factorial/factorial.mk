##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=factorial
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/Lohit/Desktop/code/decision_machine
ProjectPath            :=C:/Users/Lohit/Desktop/code/decision_machine/factorial
IntermediateDirectory  :=../build-$(ConfigurationName)/factorial
OutDir                 :=../build-$(ConfigurationName)/factorial
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Lohit
Date                   :=13/09/2019
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
Objects0=../build-$(ConfigurationName)/factorial/Factorial.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/factorial/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/factorial/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\factorial" mkdir "..\build-$(ConfigurationName)\factorial"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\factorial" mkdir "..\build-$(ConfigurationName)\factorial"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/factorial/.d:
	@if not exist "..\build-$(ConfigurationName)\factorial" mkdir "..\build-$(ConfigurationName)\factorial"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/factorial/Factorial.cpp$(ObjectSuffix): Factorial.cpp ../build-$(ConfigurationName)/factorial/Factorial.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Lohit/Desktop/code/decision_machine/factorial/Factorial.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Factorial.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/factorial/Factorial.cpp$(DependSuffix): Factorial.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/factorial/Factorial.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/factorial/Factorial.cpp$(DependSuffix) -MM Factorial.cpp

../build-$(ConfigurationName)/factorial/Factorial.cpp$(PreprocessSuffix): Factorial.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/factorial/Factorial.cpp$(PreprocessSuffix) Factorial.cpp

../build-$(ConfigurationName)/factorial/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/factorial/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Lohit/Desktop/code/decision_machine/factorial/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/factorial/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/factorial/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/factorial/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/factorial/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/factorial/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/factorial//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


