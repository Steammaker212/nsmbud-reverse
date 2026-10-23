/* sub_609343C4
 * address: 0x609343C4   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609343C4(int a1, int a2, unsigned int a3, int *a4)
{
  int v8; // r1
  int v9; // r2
  _BYTE *v10; // r1
  int v12; // [sp+4h] [bp-3Ch] BYREF
  int v13; // [sp+8h] [bp-38h]
  unsigned int v14; // [sp+Ch] [bp-34h]
  int v15; // [sp+10h] [bp-30h]
  int v16; // [sp+14h] [bp-2Ch]
  int v17; // [sp+18h] [bp-28h]
  int v18; // [sp+1Ch] [bp-24h]
  int v19; // [sp+20h] [bp-20h]
  char v20; // [sp+24h] [bp-1Ch]

  v8 = FIELD_U32(a1, 1564);
  if ( FIELD_U32(a1, 1560) > a3 )
    v8 += 3608 * a3;
  FIELD_U16(v8, 2984) = 0;
  v9 = FIELD_U32(a1, 1564);
  if ( FIELD_U32(a1, 1560) > a3 )
    v9 += 3608 * a3;
  sub_6090B4B0((unsigned __int8 *)(v9 + 2984), a2);
  if ( !FIELD_U8(a1, 1108) )
    goto LABEL_12;
  v10 = *(_BYTE **)(a1 + 1564);
  if ( FIELD_U32(a1, 1560) > a3 )
    v10 += 3608 * a3;
  if ( *v10 && FIELD_F32(a1, 1400) > 0.0 )
  {
    switch ( FIELD_U32(a1, 1092) )
    {
      case 0:
        ((void (__fastcall *)(int, int, unsigned int, int *))loc_609345BC)(a1, a2, a3, a4);
        break;
      case 1:
        reduce_ref(a1, a2, a3, a4);
        break;
      case 2:
        ((void (__fastcall *)(int, int, unsigned int, int *))loc_60936138)(a1, a2, a3, a4);
        break;
      case 3:
        v12 = a1;
        v13 = a2;
        v14 = a3;
        v15 = *a4;
        v16 = a4[1];
        v17 = a4[2];
        v18 = a4[3];
        v19 = a4[5];
        v20 = *((_BYTE *)a4 + 16);
        (***(void (__fastcall ****)(_DWORD, int *))(a1 + 1536))(FIELD_U32(a1, 1536), &v12);
        break;
      default:
        return sub_6091ADF4(*(_DWORD *)(*a4 + 28), a2);
    }
  }
  else
  {
LABEL_12:
    sub_6093F214(a2, a4[2], a4[1], &dword_60B3B954, &dword_60B3B944, v12, v13, v14);
  }
  return sub_6091ADF4(*(_DWORD *)(*a4 + 28), a2);
}
