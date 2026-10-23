/* sub_60812980
 * address: 0x60812980   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60812980(_DWORD *a1, int *a2)
{
  int result; // r0
  int SoundArchive; // r0
  int v6; // r2
  int v7; // r0
  int v8; // [sp+0h] [bp-48h] BYREF
  unsigned __int8 v9; // [sp+9h] [bp-3Fh]
  _BYTE v10[44]; // [sp+1Ch] [bp-2Ch] BYREF

  result = *a2;
  if ( *a2 )
  {
    SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
    if ( *a2 )
      v6 = *(_DWORD *)(*a2 + 220);
    else
      v6 = -1;
    sub_608A9BC0(SoundArchive, v10, v6);
    v7 = SoundSystem_getSoundArchive(SoundSystem_instance);
    sub_608A9BC0(v7, &v8, a1[1]);
    result = a1[3];
    if ( result < 0 || v10[8] == result )
    {
      result = v9;
      if ( v10[9] == v9 )
      {
        result = a1[2];
        ++*(_BYTE *)result;
      }
    }
  }
  return result;
}
