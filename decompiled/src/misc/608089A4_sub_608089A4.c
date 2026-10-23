/* sub_608089A4
 * address: 0x608089A4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608089A4(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  bool v5; // zf
  int v6; // r0
  bool v7; // zf
  int v8; // r5
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int ItemId_const; // r0

  v2 = FIELD_U32(a1, 64);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 44) == 0;
  if ( v3 || sub_608AF468(v2) == 1 )
  {
    v4 = FIELD_U32(a1, 76);
    v5 = v4 == 0;
    if ( v4 )
      v5 = FIELD_U8(a1, 45) == 0;
    if ( v5 || sub_608AF468(v4) == 1 )
    {
      v6 = FIELD_U32(a1, 72);
      v7 = v6 == 0;
      if ( v6 )
        v7 = FIELD_U8(a1, 45) == 0;
      if ( (v7 || sub_608AF468(v6) == 1) && !FIELD_U32(a1, 68) )
        return 0;
    }
  }
  v8 = FIELD_U32(dword_60CC6B0C, 88);
  if ( !v8 )
    return 0;
  v9 = sub_60805BA8(a1);
  v10 = sub_608DC930(FIELD_U32(v9, 456));
  v11 = sub_60805BA8(a1);
  v12 = sub_608DC930(FIELD_U32(v11, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v12, v8);
  return (unsigned __int16)sub_608A9AA4(v10, ItemId_const);
}
