/* sub_6046C3AC
 * address: 0x6046C3AC   size: 920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046C3AC(int a1)
{
  int result; // r0
  int *v3; // r5
  float v4; // s0
  float v5; // s4
  float v6; // s2
  char v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r0
  float *v11; // r2
  float v12; // s0
  float v13; // s2
  bool v14; // fzf
  int v15; // r0
  bool v16; // nf

  v3 = (int *)(a1 + 6840);
  result = FIELD_U32(a1, 6840);
  switch ( result )
  {
    case 0:
      FIELD_F32(a1, 116) = sub_60462B7C(a1);
      FIELD_U32(a1, 6848) = 32;
      if ( FIELD_U32(a1, 6864) == 3 )
      {
        v4 = 1.8;
        v5 = 0.0;
        v6 = 2.5;
        v7 = 1;
        FIELD_U32(a1, 100) = -1119879168;
        FIELD_U32(a1, 132) = 0;
        FIELD_U32(a1, 104) = 1031798784;
        result = 2;
      }
      else
      {
        v6 = 0.0;
        v4 = -0.5;
        v5 = 3.5;
        v7 = 0;
        FIELD_U32(a1, 100) = dword_60C9D67C;
        FIELD_U32(a1, 132) = 1065353216;
        result = 1;
      }
      FIELD_F32(a1, 120) = v6;
      FIELD_F32(a1, 124) = v5;
      FIELD_U32(a1, 128) = 0;
      FIELD_F32(a1, 136) = v4;
      FIELD_U32(a1, 140) = 0;
      FIELD_U8(a1, 6856) = v7;
      *v3 = result;
      return result;
    case 1:
      if ( FIELD_F32(a1, 124) < 0.0 )
      {
        FIELD_U32(a1, 6860) = 0;
        if ( FIELD_F32(a1, 120) < 0.0 )
          FIELD_U32(a1, 6860) = 1;
        FIELD_U8(a1, 6856) = 1;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        *v3 = 3;
        return 3;
      }
      return result;
    case 2:
      StageActor__accelerateX((StageActor *)a1);
      JUMPOUT(0x6000100C);
    case 3:
      result = a1 + 6848;
      v8 = FIELD_U32(a1, 6848);
      if ( !v8 || (v9 = v8 - 1, (*(_DWORD *)result = v9) == 0) )
      {
        *v3 = 4;
        FIELD_U8(a1, 6856) = 1;
        FIELD_U32(a1, 6844) = 0;
        FIELD_U32(a1, 136) = -1078774989;
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 0;
        FIELD_U32(a1, 128) = 0;
        FIELD_U32(a1, 100) = 1023410176;
        FIELD_U32(a1, 104) = 1023410176;
        v10 = sub_60465D48();
        v11 = (float *)dword_60AF2158;
        if ( v10 )
          v11 = flt_60AF1EA0;
        result = LODWORD(v11[FIELD_U32(a1, 6860)]);
        FIELD_U32(a1, 132) = result;
      }
      return result;
    default:
      v12 = FIELD_F32(a1, 124);
      v13 = FIELD_F32(a1, 136);
      if ( v12 >= v13 )
      {
        if ( v12 <= v13 )
        {
          v14 = v12 == v13;
          v13 = FIELD_F32(a1, 124);
          if ( v14 )
            goto LABEL_24;
        }
        else
        {
          v12 = v12 - FIELD_F32(a1, 100);
          if ( v12 < v13 )
            goto LABEL_24;
        }
LABEL_28:
        FIELD_F32(a1, 124) = v12;
        if ( FIELD_U32(a1, 6844) != 5 )
          goto LABEL_31;
        goto LABEL_29;
      }
      v12 = v12 + FIELD_F32(a1, 100);
      if ( v12 <= v13 )
        goto LABEL_28;
LABEL_24:
      FIELD_F32(a1, 124) = v13;
      v15 = FIELD_U32(a1, 6844) + 1;
      v16 = FIELD_U32(a1, 6844) - 4 < 0;
      FIELD_U32(a1, 6844) = v15;
      if ( !(v16 ^ __OFSUB__(v15, 5) | (v15 == 5)) )
      {
        FIELD_U32(a1, 6844) = 6;
        goto LABEL_31;
      }
      v12 = v13;
      FIELD_U32(a1, 136) = dword_60B0283C[v15];
      FIELD_U32(a1, 100) = dword_60B02854[v15];
      if ( v15 == 5 )
      {
LABEL_29:
        if ( v12 >= 0.0 )
        {
          FIELD_U32(a1, 100) = 1040187392;
          *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6160) + 12) + 24) = 0x40000000;
        }
      }
LABEL_31:
      result = (int)StageActor__accelerateX((StageActor *)a1);
      FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + FIELD_F32(a1, 120);
      FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + FIELD_F32(a1, 124);
      FIELD_F32(a1, 116) = FIELD_F32(a1, 116) + FIELD_F32(a1, 128);
      return result;
  }
}
