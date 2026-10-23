/* sub_605E0EC0
 * address: 0x605E0EC0   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E0EC0(float *a1)
{
  int v2; // r0
  int *v3; // r8
  float v4; // s16
  float v5; // s20
  int v6; // r5
  int v7; // r4
  float v8; // s18
  int v9; // r7
  int result; // r0
  int v11; // r1
  int v12; // [sp+0h] [bp-50h] BYREF
  int v13; // [sp+4h] [bp-4Ch]
  int v14; // [sp+8h] [bp-48h]
  float v15; // [sp+Ch] [bp-44h]

  v3 = (int *)(a1 + 1566);
  v2 = *((_DWORD *)a1 + 1566);
  if ( (v2 & 0x10000) != 0 )
  {
    v12 = 2139095039;
    v13 = 2139095039;
    v14 = -8388609;
    v15 = -3.4028e38;
    (*(void (__fastcall **)(float *, int *))(*(_DWORD *)a1 + 408))(a1, &v12);
    v4 = a1[27];
    v5 = v15;
    v6 = ActorMgr__instance;
    v7 = FIELD_U32(ActorMgr__instance, 27180);
    v8 = FIELD_F32(dword_60CC6484, 128);
    v9 = sub_60008598(ActorMgr__instance, 748, FIELD_U32(ActorMgr__instance, 27172));
    if ( v9 != v7 )
    {
      if ( v5 < v8 )
      {
        if ( v5 <= v8 )
        {
          while ( (float)((float)(*(float *)(*(_DWORD *)v9 + 6136) + *(float *)(*(_DWORD *)v9 + 6144)) * 0.5) >= v8
               || !((int (__fastcall *)(int, float))loc_6015AB38)(*(_DWORD *)v9 + 6132, v4) )
          {
            v9 = sub_60008598(v6, 748, v9 + 4);
            if ( v9 == v7 )
              goto LABEL_19;
          }
        }
        else
        {
          while ( (float)((float)(*(float *)(*(_DWORD *)v9 + 6136) + *(float *)(*(_DWORD *)v9 + 6144)) * 0.5) == v8
               || !((int (__fastcall *)(int, float))loc_6015AB38)(*(_DWORD *)v9 + 6132, v4) )
          {
            v9 = sub_60008598(v6, 748, v9 + 4);
            if ( v9 == v7 )
              goto LABEL_19;
          }
        }
        goto LABEL_24;
      }
      if ( v5 > v8 )
      {
        while ( (float)((float)(*(float *)(*(_DWORD *)v9 + 6136) + *(float *)(*(_DWORD *)v9 + 6144)) * 0.5) <= v8
             || !((int (__fastcall *)(int, float))loc_6015AB38)(*(_DWORD *)v9 + 6132, v4) )
        {
          v9 = sub_60008598(v6, 748, v9 + 4);
          if ( v9 == v7 )
            goto LABEL_19;
        }
        goto LABEL_24;
      }
      do
        v9 = sub_60008598(v6, 748, v9 + 4);
      while ( v9 != v7 );
    }
LABEL_19:
    v2 = *v3;
  }
  if ( (v2 & 0x200) != 0 )
  {
    v11 = sub_605E118C(a1);
    result = 0;
    if ( v11 != 1 )
      return result;
  }
  else
  {
    v12 = 2139095039;
    v13 = 2139095039;
    v14 = -8388609;
    v15 = -3.4028e38;
    sub_605DB894(a1, (float *)&v12);
    if ( v15 < FIELD_F32(AreaTask_intance, 1816) )
      return 0;
  }
LABEL_24:
  *((_DWORD *)a1 + 1698) = 2;
  return 1;
}
