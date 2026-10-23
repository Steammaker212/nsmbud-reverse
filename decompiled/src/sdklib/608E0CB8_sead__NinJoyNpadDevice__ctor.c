/* sead__NinJoyNpadDevice__ctor
 * address: 0x608E0CB8   size: 532   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__NinJoyNpadDevice__ctor(_DWORD *a1, int a2, int a3)
{
  int priority; // r0
  int v7; // [sp+10h] [bp-48h] BYREF
  int v8; // [sp+14h] [bp-44h]
  int v9; // [sp+18h] [bp-40h]
  int v10; // [sp+1Ch] [bp-3Ch]
  int v11; // [sp+20h] [bp-38h]
  int v12; // [sp+24h] [bp-34h]
  int v13; // [sp+28h] [bp-30h]
  int v14; // [sp+2Ch] [bp-2Ch]
  int v15; // [sp+30h] [bp-28h]

  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = a2;
  *a1 =&sead__NinJoyNpadDevice__vtable;
  a1[5] = 8;
  a1[6] = 0;
  v7 = (int)&sead__SafeStringBase__vtable;
  v8 = (int)"VibrationThread";
  priority = sead__ThreadUtil__ConvertPrioritySeadToPlatform(15);
  sead__Thread__ctor(a1 + 8422, &v7, a3, priority, 0, 0x7FFFFFFF, 4096, 32);
  a1[8422] = off_60C5BE14;
  a1[8428] = &off_60C5BE68;
  a1[8458] = a1 + 8462;
  a1[8461] = 0;
  a1[8460] = 0;
  a1[8459] = 16;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 8542));
  a1[3] = 13;
  nn__hid__InitializeNpad((nn__hid *)0xD);
  v7 = 0;
  v8 = 1;
  v9 = 2;
  v10 = 3;
  v11 = 4;
  v12 = 5;
  v13 = 6;
  v14 = 7;
  v15 = 32;
  nn__hid__SetSupportedNpadIdType((nn__hid *)&v7, (const unsigned int *)9, 4u);
  a1[7] = 5;
  memset(a1 + 16, 0, 0xE98u);
  a1[8] = 5;
  memset(a1 + 950, 0, 0xE98u);
  a1[9] = 5;
  memset(a1 + 1884, 0, 0xE98u);
  a1[10] = 5;
  memset(a1 + 2818, 0, 0xE98u);
  a1[11] = 5;
  memset(a1 + 3752, 0, 0xE98u);
  a1[12] = 5;
  memset(a1 + 4686, 0, 0xE98u);
  a1[13] = 5;
  memset(a1 + 5620, 0, 0xE98u);
  a1[14] = 5;
  memset(a1 + 6554, 0, 0xE98u);
  a1[15] = 5;
  memset(a1 + 7488, 0, 0xE98u);
  nn__hid__SetSupportedNpadStyleSet(31);
  v7 = 2;
  sub_60908478(a1 + 8422, &v7);
  sub_609085F8(a1 + 8422);
  return a1;
}
