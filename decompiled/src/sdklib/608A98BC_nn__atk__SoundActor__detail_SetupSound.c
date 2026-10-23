/* nn__atk__SoundActor__detail_SetupSound
 * address: 0x608A98BC   size: 88   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundActor__detail_SetupSound(int a1, int a2, int a3, char a4, int a5, int a6)
{
  _BYTE v7[12]; // [sp+Ch] [bp-Ch] BYREF

  v7[0] = a4;
  if ( a5 )
    return (*(int (__fastcall **)(int, int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 24))(a1, a2, a3, a5, a6, v7);
  else
    return (*(int (__fastcall **)(int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 20))(a1, a2, a3, a6, v7);
}
