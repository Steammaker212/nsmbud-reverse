/* sub_60930034
 * address: 0x60930034   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60930034(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r7
  unsigned int *v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r0
  int v12; // r4
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r7
  int v16; // r6
  unsigned int *v17; // r0
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r1
  float v21; // r6
  float v22; // r1
  float v23; // r2
  float v24; // r3
  int v25; // r0
  int v27; // [sp+0h] [bp-30h] BYREF

  v8 = FIELD_U32(a3, 28);
  if ( v8 )
  {
    if ( FIELD_U8(v8, 278) != a4 )
    {
      v9 = (unsigned int *)(v8 + 272);
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 | 1, v9) );
      FIELD_U8(v8, 278) = a4;
      v8 = FIELD_U32(a3, 28);
    }
    v11 = FIELD_U16(v8, 24);
    v12 = 1;
    if ( (int)(v11 >> a4) > 1 )
      v12 = v11 >> a4;
    v13 = sub_609200A0(v8);
    v14 = FIELD_U16(v8, 26);
    if ( v13 <= (int)(v14 >> a4) )
      v13 = v14 >> a4;
  }
  else
  {
    v13 = -1;
    v12 = -1;
  }
  v15 = FIELD_U32(a3, 60);
  if ( v15 )
  {
    v16 = a5 + a4;
    if ( FIELD_U8(v15, 278) != v16 )
    {
      v17 = (unsigned int *)(v15 + 272);
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 | 1, v17) );
      FIELD_U8(v15, 278) = v16;
      v15 = FIELD_U32(a3, 60);
    }
    v19 = FIELD_U16(v15, 24);
    v12 = 1;
    if ( (int)(v19 >> v16) > 1 )
      v12 = v19 >> v16;
    v13 = sub_609200A0(v15);
    v20 = FIELD_U16(v15, 26);
    if ( v13 <= (int)(v20 >> v16) )
      v13 = v20 >> v16;
  }
  v21 = 0.0;
  v22 = (float)v12;
  v23 = (float)v12;
  v24 = (float)v13;
  if ( v12 > 0 )
    v23 = 0.0;
  if ( v13 > 0 )
    v24 = 0.0;
  FIELD_F32(a3, 12) = v23;
  if ( v12 <= 0 )
    v22 = 0.0;
  FIELD_F32(a3, 16) = v24;
  FIELD_F32(a3, 20) = v22;
  if ( v13 > 0 )
    v21 = (float)v13;
  FIELD_F32(a3, 24) = v21;
  FIELD_F32(a3, 4) = (float)v12;
  FIELD_F32(a3, 8) = (float)v13;
  v25 = ((int (__fastcall *)(int *, int))loc_6090E438)(&v27, a3);
  sub_6090E560(v25, a2, (float *)a3);
  return sub_6090B260(a3);
}
