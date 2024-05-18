cmake_minimum_required(VERSION 3.28)
project(PowerVR_Series1 C)

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
include_directories(Source/simulat3/win32)

add_executable(PowerVR_Series1
        Source/pcx/brdsetup.h
        Source/pcx/hwregs.c
        Source/pcx/hwregs.h
        Source/pcx/hwtexas.h
        Source/pcx/rectable.h
        Source/pcx/texas.c
        Source/platform/gcc_opts.h
        Source/platform/r4000.h
        Source/platform/watcomop.h
#        Source/simulat/hwdevice.c
#        Source/simulat/hwregs.c
#        Source/simulat/hwsabren.c
#        Source/simulat/hwsabsim.c
#        Source/simulat/hwsabsim.h
#        Source/simulat/pvrosio.h
#        Source/simulat/pvrosmem.h
#        Source/simulat/sabre.h
#        Source/simulat/smtexas.h
#        Source/simulat/syscon.h
#        Source/simulat/texas.c
#        Source/simulat2/hwdevice.c
#        Source/simulat2/hwregs.c
#        Source/simulat2/hwsabren.c
#        Source/simulat2/hwsabsim.c
#        Source/simulat2/hwsabsim.h
#        Source/simulat2/pvrosio.h
#        Source/simulat2/pvrosmem.h
#        Source/simulat2/sabre.h
#        Source/simulat2/simwin.c
#        Source/simulat2/simwin.h
#        Source/simulat2/smtexas.h
#        Source/simulat2/syscon.h
#        Source/simulat2/texas.c
#        Source/simulat3/hwdevice.c
#        Source/simulat3/hwregs.c
#        Source/simulat3/hwsabren.c
#        Source/simulat3/hwsabsim.c
#        Source/simulat3/hwsabsim.h
#        Source/simulat3/pvrosio.h
#        Source/simulat3/pvrosmem.h
#        Source/simulat3/sabre.h
#        Source/simulat3/simwin.h
#        Source/simulat3/smtexas.h
#        Source/simulat3/syscon.h
#        Source/simulat3/texas.c
        Source/src/adjacenc.c
        Source/src/array.c
        Source/src/callback.c
        Source/src/d3disp.c
        Source/src/d3dlines.c
        Source/src/d3dpoint.c
        Source/src/d3dreg.c
        Source/src/d3dtri.c
        Source/src/d3dtsort.c
        Source/src/debug.c
        Source/src/disp.c
        Source/src/dlcamera.c
        Source/src/dlconvex.c
        Source/src/dldelete.c
        Source/src/dlglobal.c
        Source/src/dlines.c
        Source/src/dllights.c
        Source/src/dllists.c
        Source/src/dllod.c
        Source/src/dlmater.c
        Source/src/dlmesh.c
        Source/src/dlnewtrn.c
        Source/src/dlobject.c
        Source/src/dlpoint.c
        Source/src/dlqualit.c
        Source/src/dltransf.c
        Source/src/dpoint.c
        Source/src/dregion.c
        Source/src/dshade.c
        Source/src/dsprite.c
        Source/src/dtex.c
        Source/src/dtexnp.c
        Source/src/dtri.c
        Source/src/dtsp.c
        Source/src/dvdevice.c
        Source/src/enum2h.c
        Source/src/error.c
        Source/src/ldbin.c
        Source/src/ldbmp.c
        Source/src/list.c
        Source/src/metrics.c
        Source/src/nm_imp.c
        Source/src/parmbuff.c
        Source/src/pkisp.c
        Source/src/pktsp.c
        Source/src/profile.c
        Source/src/pvrd.c
        Source/src/rncamera.c
        Source/src/rnconvex.c
        Source/src/rnconvpr.c
        Source/src/rnfshade.c
        Source/src/rnglobal.c
        Source/src/rnlights.c
        Source/src/rnlod.c
        Source/src/rnmater.c
        Source/src/rnmesh.c
        Source/src/rnpoint.c
        Source/src/rnqualit.c
        Source/src/rnreject.c
        Source/src/rnrender.c
        Source/src/rnshade.c
        Source/src/rnshadow.c
        Source/src/rnshadrj.c
        Source/src/rnstate.c
        Source/src/rntex.c
        Source/src/rntransf.c
        Source/src/rntrav.c
        Source/src/sgl_init.c
        Source/src/sgl_math.c
        Source/src/sgllite.c
        Source/src/sglmem.c
        Source/src/sgltri.c
        Source/src/singmath.c
        Source/src/texapi.c
        Source/src/tmalloc.c
        Source/src/txmops.c)

