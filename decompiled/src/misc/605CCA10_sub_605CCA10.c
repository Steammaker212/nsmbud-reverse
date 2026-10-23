/* sub_605CCA10
 * address: 0x605CCA10   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605CCA10(StageActor *a1)
{
  _DWORD *v2; // r0
  _DWORD *p_category; // r4
  int category; // t1
  unsigned int result; // r0
  signed int smthOut; // [sp+4h] [bp-Ch] BYREF

  smthOut = -1;
  if ( sub_600005D4(a1, &smthOut) == 1 && (unsigned int)smthOut <= 3 )
  {
    v2 = *(_DWORD **)(PlayerMgr_instance + 4 * smthOut + 32);
    if ( v2 )
      Player_ReleaseCarryableEnemy(v2, (int)a1);
  }
  LODWORD(FIELD_F32(a1, 0x74)) = a1[9].aCollider.info.field_14;
  FIELD_U8(a1, 0x21A) &= 0xF8u;
  category = a1[9].aCollider.info.category;
  p_category = &a1[9].aCollider.info.category;
  *p_category = category & 0xFFFFFFFB;
  result = *(p_category - 731) & 0xBF7FFFFF;
  *(p_category - 731) = result;
  return result;
}
