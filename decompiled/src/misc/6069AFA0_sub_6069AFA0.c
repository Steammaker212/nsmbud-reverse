/* sub_6069AFA0
 * address: 0x6069AFA0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069AFA0(int a1, int a2, _DWORD *a3, _DWORD *a4, ColliderBase *a5)
{
  FIELD_U8(a1, 36) = 0;
  FIELD_U32(a1, 4) = *a4;
  FIELD_U32(a1, 8) = a4[1];
  FIELD_U32(a1, 12) = *a3;
  FIELD_U32(a1, 16) = a3[1];
  *(_DWORD *)a1 = a5;
  FIELD_U32(a1, 20) = 1132462080;
  FIELD_U32(a1, 24) = 1132462080;
  FIELD_U32(a1, 28) = 1117782016;
  FIELD_U32(a1, 32) = 1117782016;
  if ( (FIELD_U32(a5, 0x134) & 0xF) != 1 && !FIELD_U8(dword_60CC6D78, 109032) )
    JUMPOUT(0x6069B070);
  ColliderMgr_add(ColliderMgr_instance, a5);
  FIELD_U8(a1, 36) = 1;
  return 1;
}
