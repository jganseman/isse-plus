# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

# build with "V=1" for verbose builds
ifeq ($(V), 1)
V_AT =
else
V_AT = @
endif

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef STRIP
  STRIP=strip
endif

ifndef AR
  AR=ar
endif

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Debug
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := 
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DDEBUG=1 -D_DEBUG=1 -D__SEPARATION_FLOAT_PRECISION__ -D__UNIX__ -DJUCER_LINUX_MAKE_697B860A=1 -DJUCE_APP_VERSION=0.2.2 -DJUCE_APP_VERSION_HEX=0x202 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../sdks/juce/modules $(CPPFLAGS)
  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0 -msse -msse2 -std=c++0x -fopenmp -I../../sdks/eigen/ $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++11 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -ldl -lpthread -lrt -lpthread -lfftw3f -lgomp $(LDFLAGS)

  TARGET := ISSE
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

ifeq ($(CONFIG),Release)
  JUCE_BINDIR := build
  JUCE_LIBDIR := build
  JUCE_OBJDIR := build/intermediate/Release
  JUCE_OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := 
  endif

  JUCE_CPPFLAGS := $(DEPFLAGS) -DLINUX=1 -DNDEBUG=1 -D__SEPARATION_FLOAT_PRECISION__ -D__UNIX__ -DJUCER_LINUX_MAKE_697B860A=1 -DJUCE_APP_VERSION=0.2.2 -DJUCE_APP_VERSION_HEX=0x202 $(shell pkg-config --cflags alsa freetype2 libcurl x11 xext xinerama) -pthread -I../../JuceLibraryCode -I../../sdks/juce/modules $(CPPFLAGS)
  JUCE_CFLAGS += $(JUCE_CPPFLAGS) $(TARGET_ARCH) -O3 -msse -msse2 -std=c++0x -fopenmp -I../../sdks/eigen/ $(CFLAGS)
  JUCE_CXXFLAGS += $(JUCE_CFLAGS) -std=c++11 $(CXXFLAGS)
  JUCE_LDFLAGS += $(TARGET_ARCH) -L$(JUCE_BINDIR) -L$(JUCE_LIBDIR) -fvisibility=hidden $(shell pkg-config --libs alsa freetype2 libcurl x11 xext xinerama) -ldl -lpthread -lrt -lpthread -lfftw3f -lgomp $(LDFLAGS)

  TARGET := ISSE
  BLDCMD = $(CXX) -o $(JUCE_OUTDIR)/$(TARGET) $(OBJECTS) $(JUCE_LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(JUCE_OUTDIR)/$(TARGET) $(JUCE_OBJDIR)
endif

OBJECTS := \
  $(JUCE_OBJDIR)/SeparationEngine_d2eb08e8.o \
  $(JUCE_OBJDIR)/ISSEngine_cc442500.o \
  $(JUCE_OBJDIR)/PluginComponent_832e8a54.o \
  $(JUCE_OBJDIR)/AudioFormatReaderLoopSource_7534cfd9.o \
  $(JUCE_OBJDIR)/AudioSink_3d0c2313.o \
  $(JUCE_OBJDIR)/AudioSource_480d01db.o \
  $(JUCE_OBJDIR)/EnergyEnvelope_e17808f8.o \
  $(JUCE_OBJDIR)/PluginThread_8bb2fddd.o \
  $(JUCE_OBJDIR)/ISSFft_e94a1000.o \
  $(JUCE_OBJDIR)/ISSStft_56dcc16d.o \
  $(JUCE_OBJDIR)/VirtualTestUser_765627f2.o \
  $(JUCE_OBJDIR)/VirtualUser_c9e85140.o \
  $(JUCE_OBJDIR)/FilterGraph_dc171f9a.o \
  $(JUCE_OBJDIR)/GraphEditorPanel_749e22cf.o \
  $(JUCE_OBJDIR)/MainHostWindow_703df6f7.o \
  $(JUCE_OBJDIR)/PluginListWindow_447a6a27.o \
  $(JUCE_OBJDIR)/FilePlayerProcessor_e4475cdf.o \
  $(JUCE_OBJDIR)/Layer_4f6eb35b.o \
  $(JUCE_OBJDIR)/ImageLayer_25f695b6.o \
  $(JUCE_OBJDIR)/VizRenderThread_cf5b59d1.o \
  $(JUCE_OBJDIR)/MaskLayer_1ba8e34f.o \
  $(JUCE_OBJDIR)/TrainingSelectionAction_ea3811f2.o \
  $(JUCE_OBJDIR)/AddToMaskAction_95fd49a8.o \
  $(JUCE_OBJDIR)/ClearMaskAction_28857f39.o \
  $(JUCE_OBJDIR)/BoxBrushImgAction_5be14a74.o \
  $(JUCE_OBJDIR)/ClearImageAction_176be0a4.o \
  $(JUCE_OBJDIR)/PaintBrushImgAction_9679a507.o \
  $(JUCE_OBJDIR)/ColorMap_49e95539.o \
  $(JUCE_OBJDIR)/SpectrogramSettings_dd3a9c7a.o \
  $(JUCE_OBJDIR)/Timeline_e871a681.o \
  $(JUCE_OBJDIR)/TransportComp_9247fb62.o \
  $(JUCE_OBJDIR)/MainToolbar_b3f2554c.o \
  $(JUCE_OBJDIR)/ToolbarProgress_73bd4b12.o \
  $(JUCE_OBJDIR)/BrushPanel_1dc375ea.o \
  $(JUCE_OBJDIR)/AboutPage_7e5c29c6.o \
  $(JUCE_OBJDIR)/ImgBinaryData_eae345f8.o \
  $(JUCE_OBJDIR)/ImgToolbarButton_8a572e4a.o \
  $(JUCE_OBJDIR)/ToolbarItemFact_8cdb4404.o \
  $(JUCE_OBJDIR)/ToolbarSlider_695df3c6.o \
  $(JUCE_OBJDIR)/AppCommandIDs_bccb2718.o \
  $(JUCE_OBJDIR)/Main_36be1979.o \
  $(JUCE_OBJDIR)/DocWindow_8d609b52.o \
  $(JUCE_OBJDIR)/TimelineView_d890a4c6.o \
  $(JUCE_OBJDIR)/MainContentComp_be93f079.o \
  $(JUCE_OBJDIR)/Track_de244255.o \
  $(JUCE_OBJDIR)/MultiTrack_65a07292.o \
  $(JUCE_OBJDIR)/MultiPaintView_6a46446a.o \
  $(JUCE_OBJDIR)/ProgramSettings_d2ba791.o \
  $(JUCE_OBJDIR)/ThreadHelpers_2964b525.o \
  $(JUCE_OBJDIR)/ToolbarState_4b124016.o \
  $(JUCE_OBJDIR)/NewProjectMenu_c8dd4d8.o \
  $(JUCE_OBJDIR)/ISSLogger_c0dcc303.o \
  $(JUCE_OBJDIR)/BinaryData_ce4232d4.o \
  $(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o \
  $(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o \
  $(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o \
  $(JUCE_OBJDIR)/juce_audio_processors_dea3173d.o \
  $(JUCE_OBJDIR)/juce_audio_utils_c7eb679f.o \
  $(JUCE_OBJDIR)/juce_core_75b14332.o \
  $(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o \
  $(JUCE_OBJDIR)/juce_events_d2be882c.o \
  $(JUCE_OBJDIR)/juce_graphics_9c18891e.o \
  $(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o \
  $(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o \

.PHONY: clean

$(JUCE_OUTDIR)/$(TARGET): check-pkg-config $(OBJECTS) $(RESOURCES)
	@echo Linking ISSE
	-@mkdir -p $(JUCE_BINDIR)
	-@mkdir -p $(JUCE_LIBDIR)
	-@mkdir -p $(JUCE_OUTDIR)
	$(V_AT)$(BLDCMD)

check-pkg-config:
	@command -v pkg-config >/dev/null 2>&1 || { echo >&2 "pkg-config not installed. Please, install it."; exit 1; }
	@pkg-config --print-errors alsa freetype2 libcurl x11 xext xinerama

clean:
	@echo Cleaning ISSE
	$(V_AT)$(CLEANCMD)

strip:
	@echo Stripping ISSE
	-@$(STRIP) --strip-unneeded $(JUCE_OUTDIR)/$(TARGET)

$(JUCE_OBJDIR)/SeparationEngine_d2eb08e8.o: ../../src/SeparationEngine.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling SeparationEngine.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ISSEngine_cc442500.o: ../../src/api/ISSEngine.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ISSEngine.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PluginComponent_832e8a54.o: ../../src/PluginComponent.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PluginComponent.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioFormatReaderLoopSource_7534cfd9.o: ../../src/AudioFormatReaderLoopSource.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AudioFormatReaderLoopSource.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioSink_3d0c2313.o: ../../src/AudioSink.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AudioSink.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AudioSource_480d01db.o: ../../src/AudioSource.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AudioSource.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/EnergyEnvelope_e17808f8.o: ../../src/EnergyEnvelope.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling EnergyEnvelope.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PluginThread_8bb2fddd.o: ../../src/PluginThread.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PluginThread.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ISSFft_e94a1000.o: ../../src/api/ISSFft.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ISSFft.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ISSStft_56dcc16d.o: ../../src/api/ISSStft.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ISSStft.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/VirtualTestUser_765627f2.o: ../../src/VirtualTestUser.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling VirtualTestUser.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/VirtualUser_c9e85140.o: ../../src/VirtualUser.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling VirtualUser.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/FilterGraph_dc171f9a.o: ../../src/plugin/FilterGraph.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling FilterGraph.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/GraphEditorPanel_749e22cf.o: ../../src/plugin/GraphEditorPanel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling GraphEditorPanel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainHostWindow_703df6f7.o: ../../src/plugin/MainHostWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MainHostWindow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PluginListWindow_447a6a27.o: ../../src/plugin/PluginListWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PluginListWindow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/FilePlayerProcessor_e4475cdf.o: ../../src/FilePlayerProcessor.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling FilePlayerProcessor.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Layer_4f6eb35b.o: ../../src/Layer.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Layer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ImageLayer_25f695b6.o: ../../src/ImageLayer.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ImageLayer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/VizRenderThread_cf5b59d1.o: ../../src/VizRenderThread.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling VizRenderThread.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MaskLayer_1ba8e34f.o: ../../src/MaskLayer.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MaskLayer.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TrainingSelectionAction_ea3811f2.o: ../../src/TrainingSelectionAction.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TrainingSelectionAction.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AddToMaskAction_95fd49a8.o: ../../src/AddToMaskAction.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AddToMaskAction.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ClearMaskAction_28857f39.o: ../../src/ClearMaskAction.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ClearMaskAction.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BoxBrushImgAction_5be14a74.o: ../../src/BoxBrushImgAction.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BoxBrushImgAction.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ClearImageAction_176be0a4.o: ../../src/ClearImageAction.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ClearImageAction.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/PaintBrushImgAction_9679a507.o: ../../src/PaintBrushImgAction.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling PaintBrushImgAction.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ColorMap_49e95539.o: ../../src/ColorMap.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ColorMap.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/SpectrogramSettings_dd3a9c7a.o: ../../src/SpectrogramSettings.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling SpectrogramSettings.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Timeline_e871a681.o: ../../src/Timeline.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Timeline.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TransportComp_9247fb62.o: ../../src/TransportComp.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TransportComp.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainToolbar_b3f2554c.o: ../../src/MainToolbar.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MainToolbar.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ToolbarProgress_73bd4b12.o: ../../src/ToolbarProgress.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ToolbarProgress.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BrushPanel_1dc375ea.o: ../../src/BrushPanel.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BrushPanel.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AboutPage_7e5c29c6.o: ../../src/AboutPage.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AboutPage.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ImgBinaryData_eae345f8.o: ../../src/ImgBinaryData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ImgBinaryData.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ImgToolbarButton_8a572e4a.o: ../../src/ImgToolbarButton.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ImgToolbarButton.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ToolbarItemFact_8cdb4404.o: ../../src/ToolbarItemFact.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ToolbarItemFact.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ToolbarSlider_695df3c6.o: ../../src/ToolbarSlider.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ToolbarSlider.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/AppCommandIDs_bccb2718.o: ../../src/AppCommandIDs.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling AppCommandIDs.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Main_36be1979.o: ../../src/Main.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Main.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/DocWindow_8d609b52.o: ../../src/DocWindow.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling DocWindow.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/TimelineView_d890a4c6.o: ../../src/TimelineView.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling TimelineView.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MainContentComp_be93f079.o: ../../src/MainContentComp.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MainContentComp.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/Track_de244255.o: ../../src/Track.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling Track.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MultiTrack_65a07292.o: ../../src/MultiTrack.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MultiTrack.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/MultiPaintView_6a46446a.o: ../../src/MultiPaintView.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling MultiPaintView.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ProgramSettings_d2ba791.o: ../../src/ProgramSettings.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ProgramSettings.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ThreadHelpers_2964b525.o: ../../src/ThreadHelpers.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ThreadHelpers.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ToolbarState_4b124016.o: ../../src/ToolbarState.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ToolbarState.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/NewProjectMenu_c8dd4d8.o: ../../src/NewProjectMenu.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling NewProjectMenu.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/ISSLogger_c0dcc303.o: ../../src/ISSLogger.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling ISSLogger.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling BinaryData.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_basics_6b797ca1.o: ../../JuceLibraryCode/juce_audio_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_devices_a742c38b.o: ../../JuceLibraryCode/juce_audio_devices.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_formats_5a29c68a.o: ../../JuceLibraryCode/juce_audio_formats.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_processors_dea3173d.o: ../../JuceLibraryCode/juce_audio_processors.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_audio_utils_c7eb679f.o: ../../JuceLibraryCode/juce_audio_utils.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_core_75b14332.o: ../../JuceLibraryCode/juce_core.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_core.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_data_structures_72d3da2c.o: ../../JuceLibraryCode/juce_data_structures.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_events_d2be882c.o: ../../JuceLibraryCode/juce_events.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_events.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_graphics_9c18891e.o: ../../JuceLibraryCode/juce_graphics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_basics_8a6da59c.o: ../../JuceLibraryCode/juce_gui_basics.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

$(JUCE_OBJDIR)/juce_gui_extra_4a026f23.o: ../../JuceLibraryCode/juce_gui_extra.cpp
	-@mkdir -p $(JUCE_OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	$(V_AT)$(CXX) $(JUCE_CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
