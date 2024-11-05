/** @file
LogDumper.c

This application will dump the AdvancedLog to a file.

Copyright (C) Microsoft Corporation. All rights reserved.
SPDX-License-Identifier: BSD-2-Clause-Patent

**/
#include <Library/UefiBootServicesTableLib.h>

/**
  The user Entry Point for LogDumper Application.
  It starts with this function as the real entry point for the application.

  @param[in] ImageHandle    The firmware allocated handle for the EFI image.
  @param[in] SystemTable    A pointer to the EFI System Table.

  @retval EFI_SUCCESS       The entry point is executed successfully.
  @retval other             Some error occurs when executing this entry point.

**/
EFI_STATUS
EFIAPI
EntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  if (gBS == NULL) {
    return EFI_UNSUPPORTED;
  }

  return EFI_SUCCESS;
}
