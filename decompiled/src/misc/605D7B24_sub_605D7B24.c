/* sub_605D7B24
 * address: 0x605D7B24   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D7B24(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r5
  float v5; // s0
  int *v6; // r1
  int v7; // r0
  _BOOL4 v8; // r1
  ActiveColliderMgr *v10; // r6

  v2 = a1 + 6064;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
  sub_605EA6F0(v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1);
  v3 = FIELD_U32(a1, 6264);
  v4 = v3 & 0x2000;
  if ( (v3 & 0x10000) != 0 || v4 == 0 )
  {
    sub_605DECE4(a1);
    v3 = FIELD_U32(a1, 6264);
  }
  if ( v3 >= 0 )
  {
    if ( (FIELD_U8(a1, 87) & 1) != 0 )
    {
      v6 = dword_605D7D04;
      if ( !FIELD_U8(a1, 86) )
        v6 = &dword_605D7D04[1];
      v5 = *(float *)v6;
    }
    else
    {
      v5 = -2850.0;
    }
    FIELD_F32(a1, 116) = v5 + (float)((float)FIELD_U32(a1, 6800) * 16.0);
  }
  ((void (__fastcall *)(int))loc_605D7D10)(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 400))(a1);
  sub_605DAC38(a1);
  ((void (__fastcall *)(int))loc_605D7F64)(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 204))(a1);
  sub_605E48AC(a1);
  v7 = FIELD_U32(a1, 6260);
  v8 = 0;
  if ( (v7 & 0x10000000) == 0 )
  {
    if ( (v7 & 0x20000000) != 0 )
    {
LABEL_15:
      sub_605DD5FC(a1, 1);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
      goto LABEL_16;
    }
    v8 = v4 == 0;
  }
  if ( v8 )
    goto LABEL_15;
  if ( v4 )
  {
    if ( (v7 & 2) == 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
      v10 = ActiveColliderMgr_instance;
      if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7452))
        && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 7452)) )
      {
        ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 7452));
      }
    }
  }
LABEL_16:
  sub_605E4ED8(a1);
  return 1;
}
