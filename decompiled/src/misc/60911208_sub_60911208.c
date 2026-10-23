/* sub_60911208
 * address: 0x60911208   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int64 __fastcall sub_60911208(unsigned __int64 *a1)
{
  int v2; // r0
  int v4; // [sp+10h] [bp-48h] BYREF
  int v5; // [sp+14h] [bp-44h] BYREF
  int v6; // [sp+18h] [bp-40h] BYREF
  int v7; // [sp+1Ch] [bp-3Ch] BYREF
  int v8; // [sp+20h] [bp-38h] BYREF
  int v9; // [sp+24h] [bp-34h] BYREF
  __int16 v10; // [sp+28h] [bp-30h] BYREF
  char v11; // [sp+2Bh] [bp-2Dh]
  char v12; // [sp+2Ch] [bp-2Ch]
  char v13; // [sp+2Dh] [bp-2Bh]
  char v14; // [sp+2Eh] [bp-2Ah]
  _BYTE v15[40]; // [sp+30h] [bp-28h] BYREF

  if ( !byte_60CCFB48 )
  {
    if ( !nn__time__IsInitialized(0) )
      nn__time__Initialize(0);
    byte_60CCFB48 = 1;
  }
  nn__time__StandardUserSystemClock__GetCurrentTime(v15);
  nn__time__ToCalendarTime(&v10, 0, v15);
  sub_60910C08(&v9, v10);
  nullsub_114();
  v8 = v2;
  sub_60910C14(&v7, v11);
  sub_60910C1C(&v6, v12);
  sub_60910C24(&v5, v13);
  sub_60910C2C(&v4, v14);
  sub_60910E94(a1, &v9, &v8, &v7, &v6, &v5, &v4);
  return *a1;
}
