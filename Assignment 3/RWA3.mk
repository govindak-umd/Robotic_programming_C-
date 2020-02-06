##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=RWA3
ConfigurationName      :=Debug
WorkspacePath          :=/home/rachith/academia/III-SEM/ENPM809Y/lectures/RWA3-Group10
ProjectPath            :=/home/rachith/academia/III-SEM/ENPM809Y/lectures/RWA3-Group10
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Rachith
Date                   :=05/11/19
CodeLitePath           :=/home/rachith/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="RWA3.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)src/LandBasedRobot $(IncludeSwitch)src/LandBasedWheeled $(IncludeSwitch)src/LandBasedTracked 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS := -Wmain -std=c++14 -Wall -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix): src/LandBasedRobot/landbasedrobot.cpp $(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rachith/academia/III-SEM/ENPM809Y/lectures/RWA3-Group10/src/LandBasedRobot/landbasedrobot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(DependSuffix): src/LandBasedRobot/landbasedrobot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(DependSuffix) -MM src/LandBasedRobot/landbasedrobot.cpp

$(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(PreprocessSuffix): src/LandBasedRobot/landbasedrobot.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_LandBasedRobot_landbasedrobot.cpp$(PreprocessSuffix) src/LandBasedRobot/landbasedrobot.cpp

$(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(ObjectSuffix): src/LandBasedTracked/landbasedwheeled.cpp $(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rachith/academia/III-SEM/ENPM809Y/lectures/RWA3-Group10/src/LandBasedTracked/landbasedwheeled.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(DependSuffix): src/LandBasedTracked/landbasedwheeled.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(DependSuffix) -MM src/LandBasedTracked/landbasedwheeled.cpp

$(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(PreprocessSuffix): src/LandBasedTracked/landbasedwheeled.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_LandBasedTracked_landbasedwheeled.cpp$(PreprocessSuffix) src/LandBasedTracked/landbasedwheeled.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rachith/academia/III-SEM/ENPM809Y/lectures/RWA3-Group10/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(ObjectSuffix): src/LandBasedWheeled/landbasedtracked.cpp $(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/rachith/academia/III-SEM/ENPM809Y/lectures/RWA3-Group10/src/LandBasedWheeled/landbasedtracked.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(DependSuffix): src/LandBasedWheeled/landbasedtracked.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(DependSuffix) -MM src/LandBasedWheeled/landbasedtracked.cpp

$(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(PreprocessSuffix): src/LandBasedWheeled/landbasedtracked.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_LandBasedWheeled_landbasedtracked.cpp$(PreprocessSuffix) src/LandBasedWheeled/landbasedtracked.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


