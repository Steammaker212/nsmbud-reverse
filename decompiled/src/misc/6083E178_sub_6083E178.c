/* sub_6083E178
 * address: 0x6083E178   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E178(_DWORD *a1, int a2)
{
  nn__mii__ParamCharInfoAccessor *v3; // r0
  int Gender_const; // r0
  int v6; // [sp+0h] [bp-60h] BYREF

  v3 = (nn__mii__ParamCharInfoAccessor *)nn__mii__ParamCharInfoAccessor__ctor(&v6, a2);
  Gender_const = nn__mii__ParamCharInfoAccessor__GetGender_const(v3);
  return sub_60844364(*a1, Gender_const);
}
