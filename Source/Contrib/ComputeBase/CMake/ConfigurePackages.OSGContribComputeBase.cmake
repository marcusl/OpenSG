
MACRO(OSG_CONFIGURE_NVSDKCOMMON)

  IF(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/nvsdk/helper_functions.h)
            OSG_SET(OSG_NVSDKCOMMON_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/nvsdk CACHE PATH "" FORCE)
        ENDIF()

        SET(OSG_NVSDKCOMMON_LIBRARY_RELEASE "" CACHE INTERNAL "" FORCE)
        SET(OSG_NVSDKCOMMON_LIBRARY_DEBUG  "" CACHE INTERNAL "" FORCE)

        IF(UNIX)

          SET(_OSG_NSCB_LIBNAME libosgnvsdkcommon)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NSCB_LIBNAME}.a)
            SET(OSG_NVSDKCOMMON_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NSCB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_NSCB_LIBNAME}.a)
            SET(OSG_NVSDKCOMMON_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_NSCB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ELSEIF(WIN32)

          SET(_OSG_NSCB_LIBNAME libosgnvsdkcommon)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NSCB_LIBNAME}.lib)
              SET(OSG_NVSDKCOMMON_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NSCB_LIBNAME}.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NSCB_LIBNAME}D.lib)
              SET(OSG_NVSDKCOMMON_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NSCB_LIBNAME}D.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ENDIF()

        IF(OSG_NVSDKCOMMON_INCLUDE_DIR)
#            IF(OSG_NVSDKCOMMON_LIBRARY_DEBUG OR OSG_NVSDKCOMMON_LIBRARY_RELEASE)
                SET(OSG_NVSDKCOMMON_FOUND TRUE)
#            ENDIF()
        ENDIF()

#        IF(OSG_NVSDKCOMMON_FOUND)
#          OSG_ADD_IMPORT_LIB(OSG_NVSDKCOMMON_TARGETS OSG_NVSDKCOMMON_LIBRARY)
#          SET(OSG_NVSDKCOMMON_LIBRARIES ${OSG_NVSDKCOMMON_TARGETS} CACHE STRING "" FORCE)
#        ENDIF(OSG_NVSDKCOMMON_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS)

    IF(OSG_NVSDKCOMMON_FOUND)
        OSG_SET(OSG_WITH_NVSDKCOMMON 1)
    ENDIF(OSG_NVSDKCOMMON_FOUND)
  ELSE(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_WITH_NVSDKCOMMON)
      SET(OSG_NVSDKCOMMON_FOUND TRUE)
#      SET(OSG_NVSDKCOMMON_LIBRARIES OSG_OSG_NVSDKCOMMON_LIBRARY_TARGET CACHE STRING "" FORCE)
    ENDIF(OSG_WITH_NVSDKCOMMON)
  ENDIF(NOT OSG_BUILD_DEPENDEND)

ENDMACRO(OSG_CONFIGURE_NVSDKCOMMON)


MACRO(OSG_CONFIGURE_NVOCLUTILS)

  IF(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/nvocl/oclUtils.h)
            OSG_SET(OSG_NVOCLUTILS_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/nvsdk CACHE PATH "" FORCE)
        ENDIF()

        SET(OSG_NVOCLUTILS_LIBRARY_RELEASE "" CACHE INTERNAL "" FORCE)
        SET(OSG_NVOCLUTILS_LIBRARY_DEBUG  "" CACHE INTERNAL "" FORCE)

        IF(UNIX)

          SET(_OSG_NOUB_LIBNAME libosgnvoclutil)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NOUB_LIBNAME}.a)
            SET(OSG_NVOCLUTILS_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NOUB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_NOUB_LIBNAME}.a)
            SET(OSG_NVOCLUTILS_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_NOUB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ELSEIF(WIN32)

          SET(_OSG_NOUB_LIBNAME libosgnvoclutil)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NOUB_LIBNAME}.lib)
              SET(OSG_NVOCLUTILS_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NOUB_LIBNAME}.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NOUB_LIBNAME}D.lib)
              SET(OSG_NVOCLUTILS_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_NOUB_LIBNAME}D.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ENDIF()

        IF(OSG_NVOCLUTILS_INCLUDE_DIR)
            IF(OSG_NVOCLUTILS_LIBRARY_DEBUG OR OSG_NVOCLUTILS_LIBRARY_RELEASE)
                SET(OSG_NVOCLUTILS_FOUND TRUE)
            ENDIF()
        ENDIF()

        IF(OSG_NVOCLUTILS_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_NVOCLUTILS_TARGETS OSG_NVOCLUTILS_LIBRARY)
          SET(OSG_NVOCLUTILS_LIBRARIES ${OSG_NVOCLUTILS_TARGETS} CACHE STRING "" FORCE)
        ENDIF(OSG_NVOCLUTILS_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS)

    IF(OSG_NVOCLUTILS_FOUND)
        OSG_SET(OSG_WITH_NVOCLUTILS 1)
    ENDIF(OSG_NVOCLUTILS_FOUND)
  ELSE(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_WITH_NVOCLUTILS)
      SET(OSG_NVOCLUTILS_FOUND TRUE)
      SET(OSG_NVOCLUTILS_LIBRARIES OSG_OSG_NVOCLUTILS_LIBRARY_TARGET CACHE STRING "" FORCE)
    ENDIF(OSG_WITH_NVOCLUTILS)
  ENDIF(NOT OSG_BUILD_DEPENDEND)

ENDMACRO(OSG_CONFIGURE_NVOCLUTILS)


MACRO(OSG_CONFIGURE_CUDACOMMON)

  IF(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/cuda/helper_cuda.h)
            OSG_SET(OSG_CUDACOMMON_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/cuda CACHE PATH "" FORCE)
        ENDIF()

        SET(OSG_CUDACOMMON_LIBRARY_RELEASE "" CACHE INTERNAL "" FORCE)
        SET(OSG_CUDACOMMON_LIBRARY_DEBUG  "" CACHE INTERNAL "" FORCE)

        IF(UNIX)

          IF(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudacommonE)
          ELSE(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudacommon)
          ENDIF(CUDA_BUILD_EMULATION)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.a)
            SET(OSG_CUDACOMMON_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CCB_LIBNAME}.a)
            SET(OSG_CUDACOMMON_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CCB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ELSEIF(WIN32)

          IF(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudacommonE)
          ELSE(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudacommon)
          ENDIF(CUDA_BUILD_EMULATION)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.lib)
              SET(OSG_CUDACOMMON_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}D.lib)
              SET(OSG_CUDACOMMON_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}D.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ENDIF()

        IF(OSG_CUDACOMMON_INCLUDE_DIR)
#            IF(OSG_CUDACOMMON_LIBRARY_DEBUG OR OSG_CUDACOMMON_LIBRARY_RELEASE)
                SET(OSG_CUDACOMMON_FOUND TRUE)
#            ENDIF()
        ENDIF()

#        IF(OSG_CUDACOMMON_FOUND)
#          OSG_ADD_IMPORT_LIB(OSG_CUDACOMMON_TARGETS OSG_CUDACOMMON_LIBRARY)
#          SET(OSG_CUDACOMMON_LIBRARIES ${OSG_CUDACOMMON_TARGETS} CACHE STRING "" FORCE)
#        ENDIF(OSG_CUDACOMMON_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS)

    IF(OSG_CUDACOMMON_FOUND)
        OSG_SET(OSG_WITH_CUDACOMMON 1)
    ENDIF(OSG_CUDACOMMON_FOUND)
  ELSE(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_WITH_CUDACOMMON)
      SET(OSG_CUDACOMMON_FOUND TRUE)
#      SET(OSG_CUDACOMMON_LIBRARIES OSG_OSG_CUDACOMMON_LIBRARY_TARGET CACHE STRING "" FORCE)
    ENDIF(OSG_WITH_CUDACOMMON)
  ENDIF(NOT OSG_BUILD_DEPENDEND)

ENDMACRO(OSG_CONFIGURE_CUDACOMMON)

MACRO(OSG_CONFIGURE_CUDAUTIL)

  IF(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/cuda/cutil.h)
            OSG_SET(OSG_CUDAUTIL_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/cuda CACHE PATH "" FORCE)
        ENDIF()

        SET(OSG_CUDAUTIL_LIBRARY_RELEASE "" CACHE INTERNAL "" FORCE)
        SET(OSG_CUDAUTIL_LIBRARY_DEBUG "" CACHE INTERNAL "" FORCE)

        IF(UNIX)
          IF(CUDA_BUILD_EMULATION)
            SET(_OSG_CUB_LIBNAME libosgcudautilE)
          ELSE(CUDA_BUILD_EMULATION)
            SET(_OSG_CUB_LIBNAME libosgcudautil)
          ENDIF(CUDA_BUILD_EMULATION)

          IF(OSG_USE_STATIC_SUPPORT_LIBS)
              IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}.a)
                  SET(OSG_CUDAUTIL_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
              ENDIF()
              IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CUB_LIBNAME}.a)
                  SET(OSG_CUDAUTIL_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CUB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
              ENDIF()
          ELSE()
              IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}.so)
                  SET(OSG_CUDAUTIL_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}.so "" CACHE INTERNAL "" FORCE)
              ENDIF()
              IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CUB_LIBNAME}.so)
                  SET(OSG_CUDAUTIL_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CUB_LIBNAME}.so "" CACHE INTERNAL "" FORCE)
              ENDIF()
          ENDIF()
        ELSEIF(WIN32)

          IF(CUDA_BUILD_EMULATION)
            SET(_OSG_CUB_LIBNAME osgcudautilE)
          ELSE(CUDA_BUILD_EMULATION)
            SET(_OSG_CUB_LIBNAME osgcudautil)
          ENDIF(CUDA_BUILD_EMULATION)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}.lib)
              SET(OSG_CUDAUTIL_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}D.lib)
              SET(OSG_CUDAUTIL_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CUB_LIBNAME}D.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()
        ENDIF()

        IF(OSG_CUDAUTIL_INCLUDE_DIR)
            IF(OSG_CUDAUTIL_LIBRARY_DEBUG OR OSG_CUDAUTIL_LIBRARY_RELEASE)
                SET(OSG_CUDAUTIL_FOUND TRUE)
            ENDIF()
        ENDIF()

        IF(OSG_CUDAUTIL_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_CUDAUTIL_TARGETS OSG_CUDAUTIL_LIBRARY)
          SET(OSG_CUDAUTIL_LIBRARIES ${OSG_CUDAUTIL_TARGETS} CACHE STRING "" FORCE)
        ENDIF(OSG_CUDAUTIL_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS)

    IF(OSG_CUDAUTIL_FOUND)
        OSG_SET(OSG_WITH_CUDAUTIL 1)
    ENDIF(OSG_CUDAUTIL_FOUND)
  ELSE(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_WITH_CUDAUTIL)
      SET(OSG_CUDAUTIL_FOUND TRUE)
      SET(OSG_CUDAUTIL_LIBRARIES OSG_OSG_CUDAUTIL_LIBRARY_TARGET CACHE STRING "" FORCE)
    ENDIF(OSG_WITH_CUDAUTIL)
  ENDIF(NOT OSG_BUILD_DEPENDEND)

ENDMACRO(OSG_CONFIGURE_CUDAUTIL)


MACRO(OSG_CONFIGURE_CUDAPARTSDK)

  IF(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_USE_OSGSUPPORT_LIBS)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/cuda/cudapartsdk/shaders.h)
            OSG_SET(OSG_CUDAPARTSDK_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include${OSG_SUPPORT_INC_SUBDIR}/cuda/cudapartsdk CACHE PATH "" FORCE)
        ENDIF()

        SET(OSG_CUDAPARTSDK_LIBRARY_RELEASE "" CACHE INTERNAL "" FORCE)
        SET(OSG_CUDAPARTSDK_LIBRARY_DEBUG  "" CACHE INTERNAL "" FORCE)

        IF(UNIX)

          IF(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudaparticlesdkE)
          ELSE(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudaparticlesdk)
          ENDIF(CUDA_BUILD_EMULATION)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.a)
            SET(OSG_CUDAPARTSDK_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CCB_LIBNAME}.a)
            SET(OSG_CUDAPARTSDK_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/debug/${_OSG_CCB_LIBNAME}.a "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ELSEIF(WIN32)

          IF(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudaparticlesdkE)
          ELSE(CUDA_BUILD_EMULATION)
            SET(_OSG_CCB_LIBNAME libosgcudaparticlesdk)
          ENDIF(CUDA_BUILD_EMULATION)

          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.lib)
              SET(OSG_CUDAPARTSDK_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()
          IF(EXISTS ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}D.lib)
              SET(OSG_CUDAPARTSDK_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib${OSG_LIBDIR_BASE_SUFFIX}/${_OSG_CCB_LIBNAME}D.lib "" CACHE INTERNAL "" FORCE)
          ENDIF()

        ENDIF()

        IF(OSG_CUDAPARTSDK_INCLUDE_DIR)
            IF(OSG_CUDAPARTSDK_LIBRARY_DEBUG OR OSG_CUDAPARTSDK_LIBRARY_RELEASE)
                SET(OSG_CUDAPARTSDK_FOUND TRUE)
            ENDIF()
        ENDIF()

        IF(OSG_CUDAPARTSDK_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_CUDAPARTSDK_TARGETS OSG_CUDAPARTSDK_LIBRARY)
          SET(OSG_CUDAPARTSDK_LIBRARIES ${OSG_CUDAPARTSDK_TARGETS} CACHE STRING "" FORCE)
        ENDIF(OSG_CUDAPARTSDK_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS)

    IF(OSG_CUDAPARTSDK_FOUND)
        OSG_SET(OSG_WITH_CUDAPARTSDK 1)
    ENDIF(OSG_CUDAPARTSDK_FOUND)
  ELSE(NOT OSG_BUILD_DEPENDEND)
    IF(OSG_WITH_CUDAPARTSDK)
      SET(OSG_CUDAPARTSDK_FOUND TRUE)
      SET(OSG_CUDAPARTSDK_LIBRARIES OSG_OSG_CUDAPARTSDK_LIBRARY_TARGET CACHE STRING "" FORCE)
    ENDIF(OSG_WITH_CUDAPARTSDK)
  ENDIF(NOT OSG_BUILD_DEPENDEND)

ENDMACRO(OSG_CONFIGURE_CUDAPARTSDK)
