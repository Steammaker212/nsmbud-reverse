/* sub_60808E60
 * address: 0x60808E60   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808E60(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r4
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r6
  _DWORD v14[7]; // [sp+0h] [bp-40h] BYREF
  int ItemId_const; // [sp+1Ch] [bp-24h] BYREF
  unsigned __int8 v16; // [sp+20h] [bp-20h]
  _DWORD v17[7]; // [sp+24h] [bp-1Ch] BYREF

  v4 = sub_60805BA8(a1);
  v5 = sub_608DC930(FIELD_U32(v4, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v5, a2);
  v6 = sub_60805BA8(a1);
  v7 = sub_608DC930(FIELD_U32(v6, 456));
  sub_608A9BC0(v7, v14, ItemId_const);
  v8 = v14[1];
  v16 = 0;
  v9 = sub_60805BA8(SoundSystem_instance);
  dword_60CC6B00 = (int)&ItemId_const;
  dword_60CC6B04 = (int (__fastcall *)(_DWORD, _DWORD))sub_60808F78;
  v10 = sub_608AB144(v9 + 8, v8);
  v11 = FIELD_U32(v10, 4);
  if ( v11 != v10 )
  {
    do
    {
      v12 = FIELD_U32(v11, 4);
      v17[0] = 0;
      sub_608AC20C(v17, v11 - 404);
      dword_60CC6B04(v17, dword_60CC6B00);
      sub_608AC1C0(v17);
      v11 = v12;
    }
    while ( v12 != v10 );
  }
  return v16;
}
