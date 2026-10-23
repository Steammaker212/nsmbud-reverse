/* sub_6066B694
 * address: 0x6066B694   size: 1436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6066B694(int *result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r8
  int *v4; // r6
  char v5; // r12
  int **i; // r4
  int v7; // r10
  char v8; // r12
  int v9; // r0
  int *v10; // r6
  char v11; // r12
  int v12; // r10
  char v13; // r12
  int *v14; // r6
  char v15; // r12
  int **v16; // r4
  int v17; // r10
  char v18; // r12
  int v19; // [sp+28h] [bp-28h]

  v1 = result + 1733;
  v2 = result[1733];
  v19 = (unsigned __int16)result[5] >> 12;
  v3 = ActorMgr__instance;
  if ( v2 != 1 )
  {
    if ( v2 )
      return result;
    result = (int *)*((unsigned __int8 *)result + 6913);
    if ( !result )
      return result;
    *v1 = 1;
    goto LABEL_6;
  }
  if ( *((_BYTE *)result + 6914) )
  {
LABEL_6:
    v4 = (int *)sub_60008598(v3, 147, FIELD_U32(v3, 27172));
    for ( i = (int **)(v3 + 27180); v4 != *i; v4 = (int *)sub_60008598(v3, 147, (int)(v4 + 1)) )
    {
      v7 = *v4;
      if ( ((unsigned int)&dword_60C7B364 & ~(1617344476 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &StageActor_RTTI) == 1 )
      {
        if ( ((unsigned int)&dword_60CB6DE4 & ~(1617344564 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6DE4) )
        {
          dword_60CB6DE0 = (int)&off_60C15488;
          _cxa_guard_release(&dword_60CB6DE4);
        }
        if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60CB6DE0) == 1
          && v19 == (unsigned __int16)FIELD_U32(v7, 20) >> 12 )
        {
          FIELD_U8(v7, 6936) = 1;
          v9 = sub_606CA1C8(v7);
          if ( v9 )
            sub_606D47D8(v9, FIELD_U32(v7, 6908));
        }
      }
    }
    v10 = (int *)sub_60008598(v3, 149, FIELD_U32(v3, 27172));
    for ( result = *i; v10 != *i; result = *i )
    {
      v12 = *v10;
      if ( ((unsigned int)&dword_60C7B364 & ~(1617344924 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &StageActor_RTTI) == 1 )
      {
        if ( ((unsigned int)&dword_60CB6DF4 & ~(1617345012 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6DF4) )
        {
          dword_60CB6DF0 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CB6DF4);
        }
        if ( (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60CB6DF0) == 1
          && v19 == (unsigned __int16)FIELD_U32(v12, 20) >> 12 )
        {
          sub_6066CED4(v12);
        }
      }
      v10 = (int *)sub_60008598(v3, 149, (int)(v10 + 1));
    }
    return result;
  }
  *v1 = 0;
  v14 = (int *)sub_60008598(v3, 147, FIELD_U32(v3, 27172));
  v16 = (int **)(v3 + 27180);
  result = *(int **)(v3 + 27180);
  if ( v14 != result )
  {
    do
    {
      v17 = *v14;
      if ( ((unsigned int)&dword_60C7B364 & ~(1617345360 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( v17 && (**(int (__fastcall ***)(int, int *))v17)(v17, &StageActor_RTTI) == 1 )
      {
        if ( ((unsigned int)&dword_60CB6DE4 & ~(1617345448 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6DE4) )
        {
          dword_60CB6DE0 = (int)&off_60C15488;
          _cxa_guard_release(&dword_60CB6DE4);
        }
        if ( (**(int (__fastcall ***)(int, int *))v17)(v17, &dword_60CB6DE0) == 1
          && v19 == (unsigned __int16)FIELD_U32(v17, 20) >> 12 )
        {
          FIELD_U8(v17, 6936) = 0;
        }
      }
      v14 = (int *)sub_60008598(v3, 147, (int)(v14 + 1));
      result = *v16;
    }
    while ( v14 != *v16 );
  }
  return result;
}
