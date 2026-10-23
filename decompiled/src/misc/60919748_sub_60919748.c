/* sub_60919748
 * address: 0x60919748   size: 1124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60919748(int *a1)
{
  _DWORD *v2; // r5
  _DWORD *CurrentHeap_const; // r6
  int v4; // r6
  _DWORD *v5; // r6
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int v9; // r6
  int v10; // r6
  int v11; // r6
  int v12; // r6
  int v13; // r6
  _BYTE v15[28]; // [sp+Ch] [bp-1Ch] BYREF

  v2 = (_DWORD *)*a1;
  CurrentHeap_const = (_DWORD *)*a1;
  if ( !*a1 )
    CurrentHeap_const = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  (*(void (__fastcall **)(_DWORD *))(*CurrentHeap_const + 60))(CurrentHeap_const);
  sub_609154D0(CurrentHeap_const);
  sub_60915600(dword_60CCFC84, (int)CurrentHeap_const);
  FIELD_U32(dword_60CCFC84, 68) = a1[8];
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v2 + 60))(v2);
    sub_60915BB8(v2);
    sub_60915FCC(dword_60CCFC8C, v2);
    v4 = (int)v2;
  }
  else
  {
    v5 = (_DWORD *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    (*(void (__fastcall **)(_DWORD *))(*v5 + 60))(v5);
    sub_60915BB8(v5);
    sub_60915FCC(dword_60CCFC8C, v5);
    v4 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 60))(v4);
  sub_609689A8(v4);
  agl_WorkHeap_ref(dword_60CD0B50, v4, a1[2], a1[1], a1[3]);
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v2 + 60))(v2);
    sub_60968F20(v2);
    Icon_DRAW_Order_1_ref(dword_60CD0B58, v2, a1 + 11);
    v6 = (int)v2;
  }
  else
  {
    v7 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 60))(v7);
    sub_60968F20(v7);
    Icon_DRAW_Order_1_ref(dword_60CD0B58, v7, a1 + 11);
    v6 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 60))(v6);
  sub_60969C24(v6);
  v8 = (int)v2;
  FIELD_U8(dword_60CD0B60, 1428) = *((_BYTE *)a1 + 312);
  if ( !v2 )
    v8 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 60))(v8);
  Icon_TEXTURE_ref(v8);
  agl_DTA_d_ref(dword_60CD09F8, a1[4], a1[5], a1[6], v8, a1[2]);
  v9 = (int)v2;
  if ( !v2 )
    v9 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 60))(v9);
  sub_60971CC8(v9);
  sub_60971E2C(dword_60CD0B68, a1[7], v9);
  if ( a1[2] )
  {
    sub_609390E8();
    sub_609393AC(dword_60CD09EC, a1[2]);
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v2 + 60))(v2);
    sub_60950748(v2);
    agl_utl_PrimitiveTexture_ref(dword_60CD0A14, v2);
    v10 = (int)v2;
  }
  else
  {
    v11 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 60))(v11);
    sub_60950748(v11);
    agl_utl_PrimitiveTexture_ref(dword_60CD0A14, v11);
    v10 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 60))(v10);
  sub_609481E8(v10);
  sub_6094912C(dword_60CD0A0C, v10);
  if ( v2 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v2 + 60))(v2);
    sub_609540CC(v2);
    sub_609542B4(dword_60CD0A28, v2);
    v12 = (int)v2;
  }
  else
  {
    v13 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 60))(v13);
    sub_609540CC(v13);
    sub_609542B4(dword_60CD0A28, v13);
    v12 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 60))(v12);
  sub_60951188(v12);
  sub_60951358(dword_60CD0A1C, v12);
  sub_60967CC4(v15);
  v15[0] = *((_BYTE *)a1 + 313);
  AGL_ROOT_tools_bat_perforce_save_bat_ref(v2);
  return agl_hostpc_ref(dword_60CD0B48, v15, a1[2]);
}
