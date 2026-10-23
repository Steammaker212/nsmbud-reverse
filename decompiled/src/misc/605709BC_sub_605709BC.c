/* sub_605709BC
 * address: 0x605709BC   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605709BC(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // s2
  _DWORD v5[8]; // [sp+8h] [bp-20h] BYREF

  a1[29] = 1140457472;
  v2 = a1 + 27;
  a1[1745] = a1[27];
  a1[1746] = a1[28];
  a1[1747] = 1140457472;
  a1[1714] = sub_60563BB8((int)a1, 7);
  a1[1824] = 49;
  sub_605B2C10(a1);
  *((_BYTE *)a1 + 6878) = 1;
  a1[1842] = 0;
  a1[29] = 1140457472;
  a1[1837] = 1140457472;
  a1[1838] = -1056964608;
  a1[1839] = -1054867456;
  a1[1840] = 1096810496;
  a1[1841] = -1045430272;
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  a1[123] = 0;
  a1[124] = 1098907648;
  a1[125] = 0;
  a1[126] = 0;
  a1[127] = 1107296256;
  a1[128] = 1107296256;
  sub_605B5274(a1);
  a1[1528] = 1090519040;
  a1[1857] = (a1[6] & 1) == 0;
  a1[1849] = *v2;
  a1[1850] = a1[28];
  a1[1851] = a1[29];
  FIELD_F64(a1, 1859) = ((double (__fastcall *)(_DWORD *))*(_DWORD *)a1[1858])(a1 + 1858);
  a1[1861] = v3;
  ShapedCollider_init((ShapedCollider *)(a1 + 1530), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAE8C0);
  a1[1614] = a1 + 1866;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)a1 + 18);
  fly_sea_ref_2(a1, 0);
  a1[1608] = sub_605B348C;
  a1[1609] = sub_605B3934;
  a1[1610] = sub_605B4110;
  ColliderBase_setType((ColliderBase *)a1 + 18, 7);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAE2F8);
  a1[1855] = 30 * *((unsigned __int8 *)a1 + 20);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 428))(a1, &dword_60CAE8FC);
  sub_60570EA8(a1);
  v5[0] = 1115684864;
  v5[1] = 1115684864;
  sub_6069AFA0(a1 + 1810, v2, a1 + 123, v5, a1 + 1530);
  return 1;
}
