/* sub_601E4DEC
 * address: 0x601E4DEC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E4DEC(int a1, int a2)
{
  const char *v3; // r12
  int v4; // r1
  unsigned int v5; // r5
  unsigned int v6; // r6
  int v7; // lr
  int v8; // r3
  _BOOL4 v9; // r2
  bool v10; // cc
  unsigned int v11; // r0
  unsigned int v12; // r4
  int result; // r0
  _BOOL4 v14; // r5

  v3 = sub_601E3508(a1, a2);
  v4 = 0;
  v5 = a2 - 135;
  v6 = a2 - 175;
  v7 = 0;
  v8 = (int)v3;
  v9 = (unsigned int)(a2 - 1) > 0xC;
  if ( v3 )
    v8 = 1;
  v10 = (unsigned int)(a2 - 16) > 0xC;
  v11 = a2 - 31;
  v12 = a2 - 214;
  if ( v10 )
    v4 = 1;
  result = v11 > 0x65;
  v14 = v5 > 0x25;
  if ( v6 > 0x24 )
    v7 = 1;
  if ( v12 <= 0x10 )
  {
    result &= v7 & v14 & v4 & v9 & v8;
    if ( result == 1 )
      return sub_60807EF0(SoundSystem_instance, v3, 0, 1);
  }
  return result;
}
