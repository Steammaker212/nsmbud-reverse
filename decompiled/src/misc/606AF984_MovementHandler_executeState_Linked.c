/* MovementHandler_executeState_Linked
 * address: 0x606AF984   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovementHandler_executeState_Linked(MovementHandler *this)
{
  int typeMask; // r0
  unsigned int v3; // r1
  unsigned int v4; // r1
  int v5; // r5
  char v6; // r12
  unsigned int v7; // r1
  char v8; // r12
  float y; // s0
  float v10; // s2

  typeMask = FIELD_U32(this, 0x48);
  if ( (typeMask & 1) != 0 )
    return sub_606B140C(this);
  if ( (typeMask & 2) != 0 )
    return sub_606B1860(this);
  if ( (typeMask & 4) != 0 )
    return sub_606B19B0(this);
  if ( (typeMask & 8) != 0 )
    return sub_606B1B94(this);
  if ( (typeMask & 0x10) != 0 )
  {
    v3 = FIELD_U32(this, 0x38);
    if ( !v3 )
      return typeMask;
    typeMask = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    if ( typeMask )
      return typeMask;
    goto LABEL_35;
  }
  if ( (typeMask & 0x20) != 0 )
  {
    v4 = FIELD_U32(this, 0x38);
    if ( !v4 )
      return typeMask;
    v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v4);
    if ( v5 )
    {
      if ( ((unsigned int)&dword_60CB6B7C & ~(1617623700 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B7C) )
      {
        dword_60CB6B78 = (int)&off_60BCFCD8;
        _cxa_guard_release(&dword_60CB6B7C);
      }
      typeMask = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CB6B78);
      goto LABEL_32;
    }
LABEL_35:
    FIELD_U32(this, 0x44) = 1;
    return 1;
  }
  if ( (typeMask & 0x40) == 0 )
  {
    if ( (typeMask & 0x80) != 0 )
      return sub_606B1CC8(this);
    if ( (typeMask & 0x100) != 0 )
      return sub_606B1DF8(this);
    if ( (typeMask & 0x200) != 0 )
      return sub_606B1F8C(this);
    if ( (typeMask & 0x400) != 0 )
      return sub_606B2104(this);
    return typeMask;
  }
  v7 = FIELD_U32(this, 0x38);
  if ( !v7 )
    return typeMask;
  v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v7);
  if ( !v5 )
    goto LABEL_35;
  if ( ((unsigned int)&dword_60CB6BD0 & ~(1617623844 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6BD0) )
  {
    dword_60CB6BCC = (int)&off_60C14ED0;
    _cxa_guard_release(&dword_60CB6BD0);
  }
  typeMask = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60CB6BCC);
LABEL_32:
  if ( typeMask == 1 )
  {
    y = FIELD_U32(this, 0xC).y;
    typeMask = LODWORD(FIELD_U32(this, 0xC).x);
    v10 = FIELD_F32(v5, 7168);
    LODWORD(FIELD_U32(this, 0x0).x) = typeMask;
    FIELD_U32(this, 0x0).y = y - v10;
  }
  return typeMask;
}
