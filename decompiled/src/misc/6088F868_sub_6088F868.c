/* sub_6088F868
 * address: 0x6088F868   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088F868(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r1
  int i; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r7
  int v12; // r5
  int v13; // r1

  *(_DWORD *)a1 = off_60C5AA9C;
  if ( FIELD_S32(a1, 64) >= 1 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      sub_608814B4(FIELD_U32(a1, 108) + v2);
      ++v3;
      v2 += 560;
    }
    while ( v3 < FIELD_U32(a1, 64) );
  }
  v4 = FIELD_U32(a1, 56);
  if ( v4 >= 1 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v6 = *(_DWORD *)(FIELD_U32(a1, 104) + 4 * i);
      if ( v6 )
      {
        sub_60886834(v6, 0);
        debugPrintRelated3("vfx system deleted the registered binary. resource id : %d.");
        v4 = FIELD_U32(a1, 56);
      }
    }
  }
  sub_60897204(a1 + 2928, FIELD_U32(a1, 32));
  v7 = sub_608820D4();
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v7 + 12))(v7, FIELD_U32(a1, 3368));
  v8 = sub_608820D4();
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v8 + 12))(v8, FIELD_U32(a1, 3372));
  sub_60896484(a1 + 2520, FIELD_U32(a1, 32), a1 + 36);
  if ( FIELD_S32(a1, 68) >= 1 )
  {
    v9 = 0;
    v10 = 1464;
    do
    {
      ++v9;
      *(_DWORD *)(FIELD_U32(a1, 112) + v10) = &off_60C5AAB8;
      v10 += 1488;
    }
    while ( v9 < FIELD_U32(a1, 68) );
  }
  if ( FIELD_U32(a1, 1148) )
    nullsub_979();
  if ( FIELD_S32(a1, 4) >= 1 )
  {
    v11 = 0;
    v12 = 272;
    do
    {
      sub_60895C24(FIELD_U32(a1, 8) + v12, FIELD_U32(a1, 32));
      ++v11;
      v12 += 2416;
    }
    while ( v11 < FIELD_U32(a1, 4) );
  }
  v13 = FIELD_U32(a1, 2360);
  --FIELD_U32(a1, 48);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 40) + 12))(FIELD_U32(a1, 40), v13);
  sub_60898168(FIELD_U32(a1, 32));
  sub_60885F24();
  sub_60882238();
  sub_608961A4(FIELD_U32(a1, 32), a1 + 36);
  sub_60882010(0);
  sub_608820C0(0);
  sub_60889224(a1 + 36);
  sub_6088B694(a1 + 36);
  sub_608A56A4(a1 + 36);
  nn__os__FinalizeMutex(a1 + 3396);
  nn__os__FinalizeMutex(a1 + 3376);
  FIELD_U32(a1, 2928) = off_60C5AADC;
  nullsub_68();
  nullsub_65();
  nullsub_68();
  nullsub_65();
  return a1;
}
