/* sub_605CB790
 * address: 0x605CB790   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605CB790(int a1)
{
  int v2; // r0
  ActiveColliderInfo *v3; // r2
  unsigned int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  sub_605C9DD8((_DWORD *)a1);
  FIELD_U32(a1, 6116) = 0;
  v2 = FIELD_U32(a1, 6152);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "roll";
  sub_6040F4B8(v2, (int)v8, 1, 1.0, 0.0);
  FIELD_U32(a1, 156) = 0x40000000;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6160) )
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6160));
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v3 = (ActiveColliderInfo *)&qword_60CB0E18;
  else
    v3 = (ActiveColliderInfo *)&qword_60CB0E48;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, v3, a1 + 6816);
  result = FIELD_U8(a1, 84);
  if ( result <= 3 )
  {
    v5 = FIELD_U32(a1, 3184);
    v6 = FIELD_U32(a1, 3192) | 0x78;
    v7 = FIELD_U32(a1, 3176) | 0x78;
    FIELD_U32(a1, 3200) |= 0x18u;
    FIELD_U32(a1, 3192) = v6;
    FIELD_U32(a1, 3176) = v7;
    FIELD_U32(a1, 3184) = v5 | 0x78;
    return v5 | 0x78;
  }
  return result;
}
