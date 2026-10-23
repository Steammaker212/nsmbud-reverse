/* sub_600EA370
 * address: 0x600EA370   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600EA370(int a1, unsigned int a2)
{
  unsigned int v4; // r0
  int v5; // r6
  int v6; // r0
  float v7; // s0
  float v8; // s16
  ActiveColliderMgr *v9; // r5

  FIELD_U8(a1, 8184) = a2;
  v4 = a2;
  v5 = a1;
  if ( a2 >= 3 )
    v4 = 0;
  FIELD_U32(a1, 8156) = *(_DWORD *)(a1 + 4 * v4 + 8172);
  if ( FIELD_U8(a1, 8132) )
    v5 = FIELD_U32(a1, 56);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 716))(v5)
    || (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 720))(v5) == 1 )
  {
    v6 = 357913920;
    v7 = 3.0;
  }
  else
  {
    v6 = 417566240;
    v7 = 4.0;
  }
  FIELD_U32(a1, 8168) = v6 * ((int)((a2 << 24) - 0x1000000) >> 24);
  FIELD_F32(a1, 8160) = v7;
  if ( FIELD_U8(a1, 8132) )
  {
    v8 = *(float *)(FIELD_U32(a1, 56) + 116);
    FIELD_F32(a1, 116) = v8 + (float)((float)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1680))(a1) + 1) * -300.0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
    v9 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6720))
      && !ActiveColliderMgr_isInCreateList(v9, (ActiveCollider *)(a1 + 6720)) )
    {
      ActiveColliderMgr_addToCreateList(v9, (ActiveCollider *)(a1 + 6720));
    }
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C851B4);
}
