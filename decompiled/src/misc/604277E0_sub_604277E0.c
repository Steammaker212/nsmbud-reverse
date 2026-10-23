/* sub_604277E0
 * address: 0x604277E0   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604277E0(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  int v11; // r0
  _QWORD *v12; // r3
  int v13; // r0
  _BYTE v14[172]; // [sp+Ch] [bp-134h] BYREF
  int (**v15)(); // [sp+B8h] [bp-88h] BYREF
  _DWORD v16[12]; // [sp+BCh] [bp-84h] BYREF
  __int64 v17; // [sp+ECh] [bp-54h]
  __int64 v18; // [sp+F4h] [bp-4Ch]
  __int64 v19; // [sp+FCh] [bp-44h]
  __int64 v20; // [sp+104h] [bp-3Ch]
  __int64 v21; // [sp+10Ch] [bp-34h]
  __int64 v22; // [sp+114h] [bp-2Ch]

  result = *a2;
  if ( *a2 == 2 )
  {
    sub_6095CAA8(a1 + 6896, a2[10], a3, 1);
    sub_6091380C(a2[10], 0, 0);
    sub_6090B260(a2[3], a2[10]);
    return sub_6090E560(a2[8], a2[10], a2[3]);
  }
  else if ( result == 1 )
  {
    if ( !a3 )
      sub_6095CA0C(a1 + 6896);
    if ( a5 && a4 == 1 && a6 )
      v12 = (_QWORD *)(a5 + 4);
    else
      v12 = &qword_60B3B8CC;
    return sub_6095CA38(a1 + 6896, a3, 1, v12);
  }
  else if ( !result )
  {
    if ( a5 && a4 == 1 && a6 )
    {
      v11 = sub_6090BDE0(a6);
      return sub_60924DD0(a1 + 17144, a5 + 4, v11, a3);
    }
    else
    {
      v16[0] = 1065353216;
      memset(&v16[1], 0, 16);
      v16[5] = 1065353216;
      memset(&v16[6], 0, 16);
      v16[10] = 1065353216;
      v16[11] = 0;
      v15 = off_60C5D068;
      v17 = qword_60B3B8CC;
      v18 = unk_60B3B8D4;
      v19 = unk_60B3B8DC;
      v20 = unk_60B3B8E4;
      v21 = unk_60B3B8EC;
      v22 = unk_60B3B8F4;
      off_60C5D078(&v15, v16);
      sub_6090C77C(v14, 0.0, 1000.0, 1.0, -1.0, -1.0, 1.0);
      v13 = sub_6090BDE0(v14);
      sub_60924DD0(a1 + 17144, v16, v13, a3);
      nullsub_113(v14);
      return nullsub_111(&v15);
    }
  }
  return result;
}
