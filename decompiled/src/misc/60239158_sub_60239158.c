/* sub_60239158
 * address: 0x60239158   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60239158(int a1, _DWORD *a2, int a3, int a4)
{
  char v4; // r12
  int result; // r0
  int v10; // r8
  int v11; // r7
  float v12; // s18
  float v13; // s16
  int v14; // r9
  int v15; // r4
  int v16; // r5
  int TlsValue; // r0
  int CurrentCoreNumber; // r0
  int v19; // r5
  int v20; // r8
  float v21; // s0
  int v22; // [sp+4h] [bp-4Ch]
  _BYTE v23[68]; // [sp+Ch] [bp-44h] BYREF

  result = FIELD_U8(a1, 2313);
  if ( !result )
  {
    v10 = a2[6];
    v11 = a2[7];
    if ( ((unsigned int)&dword_60C8D9E4 & ~(1612943772 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9E4) )
    {
      dword_60C8D9E0 = (int)&off_60BD9634;
      _cxa_guard_release(&dword_60C8D9E4);
    }
    v22 = a4;
    if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C8D9E0) == 1 )
      goto LABEL_17;
    if ( ((unsigned int)&dword_60C8D9F4 & ~(1612943892 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9F4) )
    {
      dword_60C8D9F0 = (int)&off_60BD9634;
      _cxa_guard_release(&dword_60C8D9F4);
    }
    if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C8D9F0) == 1 )
      goto LABEL_17;
    if ( ((unsigned int)&dword_60C8D9FC & ~(1612944008 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D9FC) )
    {
      dword_60C8D9F8 = (int)&off_60BD9634;
      _cxa_guard_release(&dword_60C8D9FC);
    }
    v12 = 10000.0;
    v13 = 1.0;
    if ( v11 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C8D9F8) == 1 )
      {
LABEL_17:
        v13 = (*(float (__fastcall **)(int))(*(_DWORD *)v11 + 16))(v11);
        v12 = (*(float (__fastcall **)(int, float))(*(_DWORD *)v11 + 20))(v11, v13);
      }
    }
    v14 = v10;
    sub_6090A260(v10, v23);
    v15 = a2[10];
    if ( FIELD_U8(v15, 249) != 1 )
      sub_6091380C(v15, 1, 0);
    v16 = FIELD_U32(a1, 16);
    TlsValue = nn__os__GetTlsValue(dword_60CCFC58);
    if ( TlsValue )
      CurrentCoreNumber = TlsValue - 1;
    else
      CurrentCoreNumber = nn__os__GetCurrentCoreNumber(0);
    if ( FIELD_U32(v16, 4) > CurrentCoreNumber )
      *(_DWORD *)(FIELD_U32(v16, 8) + 2416 * CurrentCoreNumber) = 1;
    v19 = FIELD_U32(a1, 16);
    v20 = sub_6090BE54(v11);
    v21 = (*(float (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11);
    sub_60239458(v19, v15 + 8, v20, v14 + 4, v13, v12, v21, v23);
    return sub_602396F8(a1, v15, a3, v22);
  }
  return result;
}
