/* SE_PLY_BURN_DOWN_ref
 * address: 0x607A77C4   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_PLY_BURN_DOWN_ref(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float v7; // s0
  int *v8; // r0
  int *v9; // r0
  unsigned int v10; // r5
  int v11; // r0

  v3 = (_DWORD *)(a1 + 9704);
  v2 = FIELD_U32(a1, 9704);
  if ( v2 != 2 )
  {
    if ( v2 == 1 )
    {
      v4 = FIELD_F32(a1, 124);
      if ( v4 <= 2.5 )
      {
        if ( v4 <= 0.5 )
        {
          v8 = dword_607A7A80;
          if ( v4 > -0.5 )
            v8 = &dword_607A7A80[1];
          v5 = *(float *)v8;
        }
        else
        {
          v5 = -0.25;
        }
      }
      else
      {
        v5 = -0.06;
      }
      FIELD_F32(a1, 100) = v5;
      FIELD_F32(a1, 112) = v4 + FIELD_F32(a1, 112);
      ((void (__fastcall *)(int))loc_60001018)(a1);
      if ( FIELD_U8(a1, 12012) )
      {
        if ( FIELD_U32(a1, 9712) )
          goto LABEL_26;
      }
      else if ( (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 496)) >= (float)((float)(FIELD_F32(dword_60CC6484, 124)
                                                                                      - FIELD_F32(dword_60CC6484, 108))
                                                                              + -24.0) )
      {
        goto LABEL_26;
      }
      sub_607A6720(a1);
      *v3 = 2;
    }
    else if ( !v2 )
    {
      if ( !FIELD_U32(a1, 9712) )
      {
        STRM_BGM_COURSE_OUT_ALL_BUBBLE_ref_78A964(PlayerMgr_instance, FIELD_S8(a1, 84));
        FIELD_U32(a1, 9712) = 80;
        sub_60773630(a1, 44, 0);
        sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_BURN_DOWN", 0, 0);
        (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1084))(a1, 5500.0);
        PlayerBase_dispatchVirtual3(a1 + 11356, 81, 0.0);
        FIELD_U32(a1, 120) = 0;
        FIELD_U32(a1, 124) = 1078984704;
        FIELD_U32(a1, 128) = 0;
        FIELD_U32(a1, 96) = -1065353216;
        FIELD_U32(a1, 100) = -1107296256;
        FIELD_U32(a1, 160) = sub_60773F3C(a1, FIELD_U32(a1, 80));
        *v3 = 1;
        sub_603E4AD8(FIELD_U32(a1, 12008));
        ((void (__fastcall *)(int, int, _DWORD))loc_607602AC)(a1, 1, 0);
      }
      goto LABEL_26;
    }
LABEL_27:
    v10 = FIELD_S8(a1, 84);
    v11 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
    sub_60236EC4(v10, (EffectWrapper *)(a1 + 10040), dword_60B0C8C4[v11], (Vec3 *)(a1 + 108), 0, 0);
    return sub_60761440((_BYTE *)a1);
  }
  v6 = FIELD_F32(a1, 124);
  if ( v6 <= 2.5 )
  {
    if ( v6 <= 0.5 )
    {
      v9 = dword_607A7A80;
      if ( v6 > -0.5 )
        v9 = &dword_607A7A80[1];
      v7 = *(float *)v9;
    }
    else
    {
      v7 = -0.25;
    }
  }
  else
  {
    v7 = -0.06;
  }
  FIELD_F32(a1, 100) = v7;
  FIELD_F32(a1, 112) = v6 + FIELD_F32(a1, 112);
  ((void (__fastcall *)(int))loc_60001018)(a1);
LABEL_26:
  if ( *v3 )
    goto LABEL_27;
  return sub_60761440((_BYTE *)a1);
}
