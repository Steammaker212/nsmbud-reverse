/* sub_6047D75C
 * address: 0x6047D75C   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047D75C(int a1, int a2, int a3)
{
  _WORD *v5; // r5
  int v6; // r6
  unsigned int v7; // r4
  int v8; // r0
  int v9; // r2
  int v10; // r1
  int v11; // r3
  _WORD *v12; // r2
  __int16 *v13; // r3
  __int16 v14; // r7
  _WORD v16[256]; // [sp+Ch] [bp-26Ch] BYREF
  int (**v17)(); // [sp+20Ch] [bp-6Ch] BYREF
  int *v18; // [sp+210h] [bp-68h]
  int v19; // [sp+214h] [bp-64h]
  int v20; // [sp+218h] [bp-60h] BYREF

  v5 = 0;
  v6 = StaffCreditTable_init(0);
  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BD4BF0;
  switch ( a3 )
  {
    case 0:
      sub_608FDDF4((int)&v17, "Challenge_Title_%03d", a2);
      break;
    case 1:
      sub_608FDDF4((int)&v17, "Challenge_Content_%03d", a2);
      break;
    case 2:
      sub_608FDDF4((int)&v17, "Challenge_Message1_%03d", a2);
      break;
    case 3:
      sub_608FDDF4((int)&v17, "Challenge_Message2_%03d", a2);
      break;
    case 4:
      sub_608FDDF4((int)&v17, "Challenge_Message3_%03d", a2);
      break;
    default:
      break;
  }
  ((void (__fastcall *)(int (***)()))v17[3])(&v17);
  v7 = sub_60911638(FIELD_U32(v6, 4), v18);
  if ( FIELD_U32(v6, 8) > v7 )
    v5 = (_WORD *)sub_6091171C(FIELD_U32(v6, 4), v7);
  v8 = sub_609119F8(v6, v7) >> 1;
  if ( v8 >= 1 )
  {
    v9 = 0;
    if ( (v8 & 1) != 0 )
    {
      v9 = 1;
      v16[0] = *v5;
    }
    if ( v8 != 1 )
    {
      v10 = v8 - v9;
      v11 = 2 * v9 + 2;
      v12 = (_WORD *)((char *)v16 + v11);
      v13 = (_WORD *)((char *)v5 + v11);
      do
      {
        v10 -= 2;
        *(v12 - 1) = *(v13 - 1);
        v14 = *v13;
        v13 += 2;
        *v12 = v14;
        v12 += 2;
      }
      while ( v10 );
    }
  }
  return sub_6047AC98();
}
