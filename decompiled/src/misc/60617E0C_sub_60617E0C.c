/* sub_60617E0C
 * address: 0x60617E0C   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60617E0C(int a1)
{
  char v1; // r12
  _BYTE *v3; // r6
  int v4; // r5
  int v5; // r5
  float v6; // r1
  float v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v3 = (_BYTE *)(a1 + 7088);
  if ( FIELD_U8(a1, 7088) == 255 )
    return 0;
  v4 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C88A50 & ~(1617002048 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A50) )
  {
    dword_60C88A4C = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C88A50);
  }
  if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C88A4C) == 1 )
    FIELD_U8(v4, 7088) = *v3;
  v5 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60CB3358 & ~(1617002180 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3358) )
  {
    dword_60CB3354 = (int)&off_60C1028C;
    _cxa_guard_release(&dword_60CB3358);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CB3354) == 1 )
    ++FIELD_U32(v5, 7180);
  sub_60584408(dword_60CAF15C, (char)*v3, 0);
  sub_606C8BA0(a1);
  FIELD_U8(a1, 535) = 0;
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
  v6 = FIELD_F32(a1, 112);
  v8[0] = FIELD_F32(a1, 108);
  v8[1] = v6;
  v8[2] = 0.0;
  SE_OBJ_GET_COIN_ref((char)*v3, v8);
  if ( (FIELD_U8(a1, 22) & 0x10) != 0 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBACA0);
  else
    FIELD_U8(a1, 19) = 1;
  return 1;
}
