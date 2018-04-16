

void ArCoreUnity_getJniInfo(/*ref IntPtr*/ void *javaVM,
                            /*ref IntPtr*/ void *activity)
{
}

void ArCoreUnity_setArPrestoInitialized(/*EarlyUpdateCallback*/ void *onEarlyUpdate)
{
}

int ArCoreUnity_getBackgroundTextureId()
{
    return 0;
}

void ArPresto_initialize(/*IntPtr*/ void *javaVM,
                         /*IntPtr*/ void *activity,
                         /*CameraPermissionRequestProvider*/ void *requestCameraPermission)
{
}

void ArPresto_checkApkAvailability(/*CheckApkAvailabilityResultCallback*/ void *onResult,
                                   /*IntPtr*/ void *context)
{
}

void ArPresto_requestApkInstallation(/*bool*/ int user_requested,
                                     /*RequestApkInstallationResultCallback*/ void *onResult,
                                     /*IntPtr*/ void *context)
{
}

void ArPresto_getSession(/*ref IntPtr*/ void *sessionHandle)
{
}

void ArPresto_setConfiguration(/*ApiPrestoConfig*/ void *config)
{
}

void ArPresto_setEnabled(/*bool*/ int isEnabled)
{
}

void ArPresto_getFrame(/*ref IntPtr*/ void *frameHandle)
{
}

void ArPresto_getStatus(/*ref ApiPrestoStatus*/ void *prestoStatus)
{
}

void ArPresto_reset()
{
}
