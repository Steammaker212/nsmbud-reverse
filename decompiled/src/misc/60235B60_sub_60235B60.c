/* sub_60235B60
 * address: 0x60235B60   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Profile *__fastcall sub_60235B60(int a1, unsigned __int8 *a2)
{
  int v3; // r6
  int v4; // r6
  int v5; // r6
  int v6; // r6
  int v7; // r6
  int v8; // r4
  Profile *result; // r0
  _DWORD v10[16]; // [sp+0h] [bp-40h] BYREF

  if ( a2 )
    v3 = *a2;
  else
    v3 = 0;
  memset(v10, 0, 44);
  v10[3] = Profile__get(0x24Cu);
  if ( v3 )
  {
    v10[0] = v3 - 1;
    sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  }
  if ( a2 )
    v4 = a2[1];
  else
    v4 = 0;
  memset(v10, 0, 44);
  v10[3] = Profile__get(0x317u);
  if ( v4 )
  {
    v10[0] = v4 - 1;
    sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  }
  if ( a2 )
    v5 = a2[2];
  else
    v5 = 0;
  memset(v10, 0, 44);
  v10[3] = Profile__get(0x319u);
  if ( v5 )
  {
    v10[0] = v5 - 1;
    sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  }
  if ( a2 )
    v6 = a2[3];
  else
    v6 = 0;
  memset(v10, 0, 44);
  v10[3] = Profile__get(0x318u);
  if ( v6 )
  {
    v10[0] = v6 - 1;
    sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  }
  if ( a2 )
    v7 = a2[4];
  else
    v7 = 0;
  memset(v10, 0, 44);
  v10[3] = Profile__get(0x24Eu);
  if ( v7 )
  {
    v10[0] = v7 - 1;
    sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  }
  if ( a2 )
    v8 = a2[5];
  else
    v8 = 0;
  memset(v10, 0, 44);
  result = Profile__get(0x59u);
  v10[3] = result;
  if ( v8 )
  {
    v10[0] = v8 - 1;
    return (Profile *)sub_600080BC((_DWORD *)ActorMgr__instance, v10);
  }
  return result;
}
