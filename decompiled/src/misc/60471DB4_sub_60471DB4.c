/* sub_60471DB4
 * address: 0x60471DB4   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60471DB4(int a1, int a2)
{
  void *v4; // r0
  int v5; // r2
  _WORD *v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r5
  signed int v10; // r4
  __int64 v11; // r0
  int v12; // r0
  _WORD *v13; // r1
  int v14; // r0
  int v15; // r11
  int v16; // r0
  int (***v17)(); // r5
  int v18; // r1
  unsigned int v19; // r10
  int v20; // r1
  _WORD *v21; // r2
  int v22; // r0
  int v23; // r5
  int *v24; // r4
  int v25; // r7
  int (**v26)(); // r6
  unsigned __int16 *v27; // r6
  int v28; // t1
  int v29; // r0
  int v30; // r2
  _WORD *i; // r1
  _WORD *v32; // r1
  _DWORD *v33; // r1
  bool v34; // zf
  int v36; // [sp+8h] [bp-268h]
  int v37; // [sp+Ch] [bp-264h]
  int v38; // [sp+14h] [bp-25Ch]
  int v39; // [sp+18h] [bp-258h]
  int v40; // [sp+1Ch] [bp-254h] BYREF
  int (**v41)(); // [sp+20h] [bp-250h] BYREF
  int *v42; // [sp+24h] [bp-24Ch]
  int v43; // [sp+28h] [bp-248h]
  int v44; // [sp+2Ch] [bp-244h] BYREF
  int (***v45)(); // [sp+22Ch] [bp-44h]
  int v46; // [sp+230h] [bp-40h]
  int (**v47)(); // [sp+234h] [bp-3Ch] BYREF
  _WORD *v48; // [sp+238h] [bp-38h]
  _WORD v49[2]; // [sp+23Ch] [bp-34h] BYREF
  signed int v50; // [sp+240h] [bp-30h] BYREF
  int (**v51)(); // [sp+244h] [bp-2Ch] BYREF
  int v52; // [sp+248h] [bp-28h]

  v4 = *(void **)(a1 + 3272);
  if ( v4 )
  {
    operator_delete_8DE3FC(v4);
    FIELD_U32(a1, 3268) = 0;
    FIELD_U32(a1, 3272) = 0;
  }
  v36 = a1 + 3276;
  sub_608DEB70(a1 + 3276);
  v5 = FIELD_U32(a2, 172);
  v6 = (_WORD *)(v5 + 2);
  v7 = 1;
  v51 = &off_60BFC9EC;
  v8 = 0;
  v52 = v5;
  v50 = 0;
  while ( *(v6 - 1) && v7 - 1 <= 0x7FFFF && *v6 )
  {
    v6 += 2;
    v7 += 2;
    v8 += 2;
  }
  v9 = 0;
  sub_6047D934(0, &v50);
  v10 = v50;
  if ( v50 >= 1 )
  {
    v11 = 4LL * (unsigned int)v50;
    if ( !is_mul_ok(4u, v50) )
      HIDWORD(v11) = 1;
    if ( HIDWORD(v11) )
      LODWORD(v11) = -1;
    v12 = sub_608DE334(v11, 0, 4);
    if ( v12 )
    {
      FIELD_U32(a1, 3268) = v10;
      FIELD_U32(a1, 3272) = v12;
    }
  }
  v49[0] = 10;
  v49[1] = 0;
  v45 = &v51;
  v46 = 0;
  v47 = &off_60BFC9EC;
  v48 = v49;
  v51[3]();
  v38 = a1;
  v13 = (_WORD *)(v52 + 2);
  v14 = 1;
  while ( *(v13 - 1) )
  {
    if ( v14 - 1 > 0x7FFFF )
    {
      v9 = 0;
      break;
    }
    if ( !*v13 )
    {
      v9 = v14;
      break;
    }
    v13 += 2;
    v14 += 2;
    v9 += 2;
  }
  v42 = &v44;
  v41 = &off_60BFCA1C;
  v43 = 256;
  sub_608FDDB4(&v41);
  *(_WORD *)v42 = 0;
  v15 = v46;
  v41 = &off_60BFCA04;
  v16 = v9 + 1;
  v17 = v45;
  v37 = v16;
  if ( v45 != &v51 || (v18 = 0, v46 != v16) )
  {
    v18 = 0;
    v19 = 0;
    do
    {
      v39 = v18;
      ((void (__fastcall *)(int (***)()))(*v17)[3])(v17);
      v20 = 1;
      v21 = (_WORD *)v17[1] + 1;
      v22 = 0;
      while ( *(v21 - 1) )
      {
        if ( v20 - 1 > 0x7FFFF )
        {
          v22 = 0;
          break;
        }
        if ( !*v21 )
        {
          v22 = v20;
          break;
        }
        v21 += 2;
        v20 += 2;
        v22 += 2;
      }
      if ( v15 >= 0 && v15 <= v22 )
      {
        ((void (__fastcall *)(int (***)()))v41[3])(&v41);
        v23 = v43;
        if ( v43 >= 1 )
        {
          v24 = v42;
          v25 = 0;
          while ( 1 )
          {
            v26 = v45[1];
            v28 = *((unsigned __int16 *)v26 + v15);
            v27 = (unsigned __int16 *)v26 + v15;
            if ( !v28 )
              break;
            ((void (__fastcall *)(int (***)()))v47[3])(&v47);
            v29 = *v27;
            v30 = 1;
            for ( i = v48 + 1; *(i - 1); i += 2 )
            {
              if ( (unsigned __int16)*(i - 1) == v29 )
                goto LABEL_47;
              if ( v30 >= 524289 || !*i )
                break;
              if ( (unsigned __int16)*i == v29 )
                goto LABEL_47;
              v30 += 2;
            }
            v32 = (_WORD *)v24 + v25++;
            ++v15;
            *v32 = v29;
            if ( v23 <= v25 )
              goto LABEL_48;
          }
LABEL_47:
          *((_WORD *)v24 + v25) = 0;
          v46 = v15 + 1;
        }
      }
LABEL_48:
      v40 = 0;
      ((void (__fastcall *)(int (***)()))v41[3])(&v41);
      sub_6047D934(&v40, 0);
      v33 = *(_DWORD **)(v38 + 3272);
      if ( FIELD_U32(v38, 3268) > v19 )
        v33 += v19;
      ++v19;
      *v33 = v40;
      v17 = v45;
      v15 = v46;
      v18 = v40 + v39;
      v34 = v45 == &v51;
      if ( v45 == &v51 )
        v34 = v46 == v37;
    }
    while ( !v34 );
  }
  return sead__PtrArrayImpl__allocBuffer(v36, v18);
}
