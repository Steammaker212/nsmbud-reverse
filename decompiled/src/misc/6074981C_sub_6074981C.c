/* sub_6074981C
 * address: 0x6074981C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074981C(int a1)
{
  int *v2; // r1
  int v3; // r0

  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 = &dword_60AF2DB4;
  else
    v2 = &dword_60AF2DB0;
  v3 = *(_DWORD *)sub_60008598(ActorMgr__instance, *v2, FIELD_U32(ActorMgr__instance, 27172));
  if ( v3 )
    sub_6074C858(v3, a1);
  return 1;
}
