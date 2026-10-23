/* RopeLadder_onExecute
 * address: 0x60635E70   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RopeLadder_onExecute(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r8
  int v5; // r0
  float v6; // s0
  int v7; // r6
  int v8; // r0
  unsigned int v9; // r1
  float v10; // s2
  unsigned int i; // r5
  int *v12; // r0
  unsigned int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r7
  _DWORD *j; // r6
  unsigned int v18; // r0
  int v19; // r5
  int v20; // r0
  _DWORD *v21; // r2
  int v22; // r1

  v2 = FIELD_U32(a1, 992);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      v2 = FIELD_U32(v2, 4);
      --v3;
    }
    while ( v2 );
    v4 = 1;
    if ( v3 )
      goto LABEL_6;
  }
  v4 = 0;
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v5 )
  {
LABEL_6:
    v6 = sub_60635B1C(a1);
    v7 = FIELD_U32(a1, 164);
    v8 = (FIELD_U8(a1, 1277) + 1) & 0x1F;
    FIELD_U8(a1, 1277) = v8;
    *(_DWORD *)(a1 + 4 * v8 + 1144) = v7;
    v9 = FIELD_U8(a1, 1276);
    if ( FIELD_U8(a1, 1276) )
    {
      for ( i = 0; ; ++i )
      {
        v10 = (float)v9;
        *(_DWORD *)(a1 + 1080 + 4 * i) = (int)(float)((float)((float)v7
                                                            * (float)((float)(v10 * v10)
                                                                    - (float)((float)(v10 - (float)i)
                                                                            * (float)(v10 - (float)i))))
                                                    / (float)(v10 * v10));
        if ( v9 - 1 == i )
          break;
        v8 = ((_BYTE)v8 + 30) & 0x1F;
        v7 = *(_DWORD *)(a1 + 4 * v8 + 1144);
      }
    }
    v12 = (int *)(a1 + 1080);
    v13 = a1 + 4 * v9 + 1080;
    v14 = 0;
    do
    {
      v15 = *v12;
      v16 = *v12 - v14;
      if ( v16 < 201326593 )
      {
        if ( v16 < -201326592 )
          v15 = v14 - 201326592;
        v14 = v15;
      }
      else
      {
        v14 += 201326592;
      }
      *v12++ = v14;
    }
    while ( (unsigned int)v12 < v13 );
    if ( v6 < -0.5 || v6 > 0.5 )
    {
      if ( v4 == 1 )
      {
        for ( j = *(_DWORD **)(a1 + 992); j; j = (_DWORD *)j[1] )
        {
          v18 = *(char *)(*(_DWORD *)(*j + 2196) + 84);
          if ( v18 <= 3 )
          {
            v19 = *(_DWORD *)(PlayerMgr_instance + 4 * v18 + 32);
            if ( v19 )
            {
              (*(void (__fastcall **)(_DWORD, int, int, _DWORD, float, float, _DWORD))(*(_DWORD *)v19 + 752))(
                *(_DWORD *)(PlayerMgr_instance + 4 * v18 + 32),
                1,
                2,
                0,
                0.0,
                0.0,
                0);
              sub_60773630(v19, 30, 0);
            }
          }
        }
      }
      else
      {
        ColliderMgr_removeFromList4(ColliderMgr_instance, (ColliderBase *)(a1 + 648));
      }
    }
    else
    {
      sub_60153A98(ColliderMgr_instance, a1 + 648);
    }
    if ( FIELD_U8(a1, 1276) )
    {
      v20 = 0;
      do
      {
        v21 = *(_DWORD **)(a1 + 1036);
        v22 = a1 + 4 * v20;
        if ( FIELD_U32(a1, 1032) > (unsigned int)v20 )
          v21 += v20;
        ++v20;
        *v21 = FIELD_U32(v22, 1080);
      }
      while ( v20 < FIELD_U8(a1, 1276) );
    }
    SwingingCollider_execute((ColliderBase *)(a1 + 648));
    sub_606356DC(a1);
  }
  return 1;
}
