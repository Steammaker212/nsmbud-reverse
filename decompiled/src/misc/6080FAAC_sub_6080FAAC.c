/* sub_6080FAAC
 * address: 0x6080FAAC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080FAAC(int a1, int a2)
{
  int v3; // r0
  unsigned int v4; // r2
  int v5; // r1
  int result; // r0
  unsigned int v7; // r3

  v3 = sub_60808F58(SoundSystem_instance, a2);
  v4 = FIELD_U32(a1, 120);
  v5 = v3;
  if ( !v4 )
    return 0;
  result = a1 + 172;
  v7 = 0;
  while ( !*(_DWORD *)result || *(_DWORD *)(*(_DWORD *)result + 220) != v5 )
  {
    ++v7;
    result += 24;
    if ( v7 >= v4 )
      return 0;
  }
  return result;
}
