/* sub_60817CA4
 * address: 0x60817CA4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60817CA4(int a1, int a2)
{
  _BOOL4 result; // r0
  _BOOL4 v4; // r3
  bool v5; // zf
  int v6; // r4
  int SoundArchive; // r0
  _BYTE v8[4]; // [sp+4h] [bp-2Ch] BYREF
  int v9; // [sp+8h] [bp-28h]

  result = 0;
  v4 = 0;
  if ( FIELD_U32(a1, 20) == 17 )
  {
    v4 = 0;
    if ( (FIELD_U8(a1, 24) & 1) == 0 )
      v4 = FIELD_U8(a1, 56) == 0;
  }
  v5 = !v4;
  if ( !v4 )
    v5 = FIELD_U8(a1, 57) == 0;
  if ( !v5 )
  {
    v6 = sub_60808F58(SoundSystem_instance, a2);
    SoundArchive = SoundSystem_getSoundArchive(SoundSystem_instance);
    sub_608A9BC0(SoundArchive, v8, v6);
    result = 1;
    if ( (unsigned int)(v9 - 67108866) <= 8 )
      return ((0x129u >> (v9 - 2)) & 1) == 0;
  }
  return result;
}
