/* sub_608A5070
 * address: 0x608A5070   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A5070(int *a1)
{
  int *v2; // r5
  int *v3; // r6
  int *v4; // r5
  int v5; // r12
  int v6; // lr
  int v7; // r2
  int v8; // r3
  int v9; // r6
  int v10; // r5
  int v11; // r7
  int result; // r0

  v2 = a1 + 71;
  memset(a1 + 71, 255, 0x58u);
  sub_608962E8(v2, a1[1], "sysViewUniformBlock");
  v3 = a1 + 73;
  sub_608962E8(a1 + 73, a1[1], "sysEmitterStaticUniformBlock");
  v4 = a1 + 75;
  sub_608962E8(a1 + 75, a1[1], "sysEmitterDynamicUniformBlock");
  sub_608962E8(a1 + 77, a1[1], "sysEmitterFieldUniformBlock");
  sub_608962E8(a1 + 79, a1[1], "sysEmitterPluginUniformBlock");
  sub_608962E8(a1 + 81, a1[1], "sysCustomShaderReservedUniformBlockParam");
  sub_608962E8(a1 + 83, a1[1], "sysCustomShaderUniformBlock0");
  sub_608962E8(a1 + 85, a1[1], "sysCustomShaderUniformBlock1");
  sub_608962E8(a1 + 87, a1[1], "sysCustomShaderUniformBlock2");
  sub_608962E8(a1 + 89, a1[1], "sysCustomShaderUniformBlock3");
  v5 = a1[71];
  if ( v5 != -1 )
    a1[2] |= 1u;
  v6 = a1[72];
  if ( v6 != -1 )
    a1[2] |= 0x8000u;
  v7 = *v3;
  if ( *v3 != -1 )
    a1[2] |= 2u;
  v8 = a1[74];
  if ( v8 != -1 )
    a1[2] |= 0x10000u;
  v9 = *v4;
  if ( *v4 != -1 )
    a1[2] |= 4u;
  v10 = a1[76];
  if ( v10 != -1 )
    a1[2] |= 0x20000u;
  v11 = a1[77];
  if ( v11 != -1 )
    a1[2] |= 8u;
  result = a1[78];
  if ( result != -1 )
    a1[2] |= 0x40000u;
  if ( a1[79] != -1 )
    a1[2] |= 0x10u;
  if ( a1[80] != -1 )
    a1[2] |= 0x80000u;
  if ( a1[81] != -1 )
    a1[2] |= 0x20u;
  if ( a1[82] != -1 )
    a1[2] |= 0x100000u;
  if ( v5 != -1 )
    a1[2] |= 0x40u;
  if ( v6 != -1 )
    a1[2] |= 0x200000u;
  if ( v7 != -1 )
    a1[2] |= 0x80u;
  if ( v8 != -1 )
    a1[2] |= 0x400000u;
  if ( v9 != -1 )
    a1[2] |= 0x100u;
  if ( v10 != -1 )
    a1[2] |= 0x800000u;
  if ( v11 != -1 )
    a1[2] |= 0x200u;
  if ( result != -1 )
  {
    result = a1[2] | 0x1000000;
    a1[2] = result;
  }
  return result;
}
