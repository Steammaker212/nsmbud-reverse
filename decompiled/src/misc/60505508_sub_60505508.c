/* sub_60505508
 * address: 0x60505508   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60505508(int a1, unsigned int a2, int a3)
{
  int result; // r0
  unsigned int v6; // r6
  unsigned int v7; // r0
  int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r0
  unsigned int v18; // r0
  int (**v19)(); // [sp+8h] [bp-20h] BYREF
  int v20; // [sp+Ch] [bp-1Ch]

  result = a3;
  switch ( a3 )
  {
    case 0:
    case 2:
      FIELD_U8(a1, 3904) = 1;
      v6 = 0;
      v19 = &sead__SafeStringBase__vtable;
      v20 = sub_605057D8(1);
      sub_60473DE4((_DWORD *)a1, 0, &v19, 0);
      v7 = 0;
      if ( a2 < 0x43 )
        v7 = a2;
      v8 = a1 + 3636;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3612), *(_DWORD *)(a1 + 3636 + 4 * v7));
      v9 = a2 + 1;
      if ( a2 + 1 >= 0x43 )
        v9 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3616), *(_DWORD *)(v8 + 4 * v9));
      v10 = a2 + 2;
      if ( a2 + 2 >= 0x43 )
        v10 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3620), *(_DWORD *)(v8 + 4 * v10));
      v11 = a2 + 3;
      if ( a2 + 3 >= 0x43 )
        v11 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3624), *(_DWORD *)(v8 + 4 * v11));
      v12 = a2 + 4;
      if ( a2 + 4 >= 0x43 )
        v12 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3628), *(_DWORD *)(v8 + 4 * v12));
      v13 = a2 + 5;
      goto LABEL_24;
    case 1:
    case 3:
      v6 = 0;
      FIELD_U8(a1, 3904) = 0;
      v19 = &sead__SafeStringBase__vtable;
      v20 = sub_605057D8(0);
      sub_60473DE4((_DWORD *)a1, 0, &v19, 0);
      v8 = a1 + 3636;
      v14 = a2 - 1;
      if ( a2 - 1 >= 0x43 )
        v14 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3612), *(_DWORD *)(v8 + 4 * v14));
      v15 = 0;
      if ( a2 < 0x43 )
        v15 = a2;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3616), *(_DWORD *)(v8 + 4 * v15));
      v16 = a2 + 1;
      if ( a2 + 1 >= 0x43 )
        v16 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3620), *(_DWORD *)(v8 + 4 * v16));
      v17 = a2 + 2;
      if ( a2 + 2 >= 0x43 )
        v17 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3624), *(_DWORD *)(v8 + 4 * v17));
      v18 = a2 + 3;
      if ( a2 + 3 >= 0x43 )
        v18 = 0;
      ((void (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3628), *(_DWORD *)(v8 + 4 * v18));
      v13 = a2 + 4;
LABEL_24:
      if ( v13 < 0x43 )
        v6 = v13;
      result = ((int (__fastcall *)(_DWORD, _DWORD))loc_60506438)(FIELD_U32(a1, 3632), *(_DWORD *)(v8 + 4 * v6));
      break;
    default:
      return result;
  }
  return result;
}
