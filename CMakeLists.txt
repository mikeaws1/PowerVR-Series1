cmake_minimum_required(VERSION 3.28)
project(PowerVR C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS -m32)

add_definitions(-DWIN32 -DPCX2 -D_BUILDING_SGL_)
include_directories(Source/include)
include_directories(Source/pcx)
include_directories(Source/pcmake)
include_directories(Source/platform)
#include_directories(Source/simulat)
#include_directories(Source/simulat2)
#include_directories(Source/simulat3)
include_directories(Source/src/win32)


add_library(${PROJECT_NAME}_driver SHARED
        Source/src/d3dlines.c
        Source/src/d3dpoint.c
        Source/src/dtex.c
        Source/src/dtexnp.c
        Source/src/disp.c
        Source/src/d3dtsort.c
        Source/src/d3disp.c
        Source/src/dtsp.c
        Source/src/d3dreg.c
        Source/src/d3dtri.c
        Source/src/metrics.c
        Source/src/parmbuff.c
        Source/src/dshade.c
        Source/src/pvrd.c
        Source/src/pkisp.c
        Source/src/pktsp.c
        Source/src/debug.c
        Source/src/sgl_math.c
        Source/src/sgltri.c
        Source/src/singmath.c
)

add_library(${PROJECT_NAME}_sgllite SHARED
        Source/src/dsprite.c
        Source/src/dlines.c
        Source/src/dpoint.c
        Source/src/dtex.c
        Source/src/dtexnp.c
        Source/src/disp.c
        Source/src/dtsp.c
        Source/src/dshade.c
        Source/src/dtri.c
        Source/src/sgltri.c
        Source/src/sgllite.c
)
add_library(${PROJECT_NAME}_sgl_common SHARED
        Source/src/error.c
        Source/src/rnglobal.c
        Source/src/txmops.c
        Source/src/ldbmp.c
        Source/src/nm_imp.c
        Source/src/sgl_math.c
        Source/src/singmath.c
        Source/src/dvdevice.c
        Source/src/metrics.c
        Source/src/parmbuff.c
        Source/src/list.c
        Source/src/dregion.c
        Source/src/pkisp.c
        Source/src/pktsp.c
        Source/src/debug.c
)




add_library(${PROJECT_NAME}_sgl SHARED
        Source/src/d3dlines.c
        Source/src/d3dpoint.c
        Source/src/dtex.c
        Source/src/dtexnp.c
        Source/src/disp.c
        Source/src/d3dtsort.c
        Source/src/d3disp.c
        Source/src/dtsp.c
        Source/src/d3dreg.c
        Source/src/d3dtri.c
        Source/src/metrics.c
        Source/src/parmbuff.c
        Source/src/dshade.c
        Source/src/pvrd.c
        Source/src/pkisp.c
        Source/src/pktsp.c
        Source/src/debug.c
        Source/src/sgl_math.c
        Source/src/sgltri.c
        Source/src/singmath.c
)

add_library(${PROJECT_NAME}_pvros SHARED
        Source/src/texapi.c
        Source/src/tmalloc.c
        Source/src/profile.c
        Source/src/callback.c
        Source/src/debug.c
)

add_library(${PROJECT_NAME}_win32os SHARED
        Source/src/win32/system.c
        Source/src/win32/display.c
        Source/src/win32/pvros.rc
        Source/src/win32/texapiml.asm
        Source/src/win32/pci.asm
        Source/src/win32/fast.asm
        Source/src/win32/brdcfg.c
        Source/src/win32/brdsetup.c
        Source/src/win32/texif.c
        Source/src/win32/heap.c)
