/* sub_605EAB74
 * address: 0x605EAB74   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605EAB74(int a1, int a2)
{
  int v3; // r3
  void *v4; // r0
  unsigned int result; // r0

  v3 = FIELD_U32(a1, 8);
  v4 = (void *)sead__GlobalRandom__sInstance;
  if ( !v3 )
    v4 = (void *)(dword_60C9CF0C + 1340);
  result = sead__Random__getU32(v4);
  if ( a2 != -1 )
    JUMPOUT(0x605EA46C);
  return result;
}
