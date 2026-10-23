/* SoundActor_vf8
 * address: 0x60812A30   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SoundActor_vf8(int a1, int a2, signed int a3)
{
  int v5; // r0
  _BYTE v7[16]; // [sp+4h] [bp-34h] BYREF
  _DWORD v8[4]; // [sp+14h] [bp-24h] BYREF
  unsigned __int8 v9; // [sp+27h] [bp-11h] BYREF

  v9 = 0;
  v5 = sub_60808F58(SoundSystem_instance, a2);
  if ( a3 > 3 )
    a3 = -1;
  v8[0] = &off_60C28B44;
  v8[1] = v5;
  v8[2] = &v9;
  v8[3] = a3;
  sub_60812AA8(v7, a1, v8, 0);
  return v9;
}
