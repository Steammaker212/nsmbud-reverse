/* sub_608FAAF0
 * address: 0x608FAAF0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608FAAF0(int a1, int a2, int a3, int a4)
{
  int *result; // r0
  int v6; // r8
  int v7; // r0
  unsigned int *v8; // r5
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r7
  char v12; // r5
  unsigned int *v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r2
  int v16; // r2
  int v17; // r3

  result = &sead__ThreadMgr__sInstance;
  v6 = sead__ThreadMgr__sInstance;
  if ( sead__ThreadMgr__sInstance )
  {
    v7 = *(_DWORD *)(sead__ThreadMgr__sInstance + 68);
    if ( v7 )
    {
      v8 = (unsigned int *)(v7 + 104);
      while ( 1 )
      {
        while ( 1 )
        {
          v9 = __ldrex(v8);
          if ( v9 != a1 )
            break;
          if ( !__strex(0, v8) )
            goto LABEL_9;
        }
        if ( (v9 & 0xFFFFFFFE) != a1 )
          break;
        sub_609085CC(dword_60CCEF08, dword_60CCEF0C, a3, a4);
      }
    }
LABEL_9:
    sead__CriticalSection__lock(v6 + 32);
    v10 = FIELD_U32(v6, 24);
    v11 = v6 + 20;
    if ( v10 == v6 + 20 )
    {
      return (int *)sead__CriticalSection__unlock(v6 + 32);
    }
    else
    {
      while ( 1 )
      {
        v12 = 0;
        do
        {
          v13 = (unsigned int *)(FIELD_U32(v10, 8) + 104);
          while ( 1 )
          {
            v14 = __ldrex(v13);
            if ( v14 != a1 )
              break;
            if ( !__strex(0, v13) )
              goto LABEL_16;
          }
          v15 = v14 & 0xFFFFFFFE;
          v12 |= v15 == a1;
          if ( v15 == a1 )
            break;
LABEL_16:
          v10 = FIELD_U32(v10, 4);
        }
        while ( v10 != v11 );
        result = (int *)sead__CriticalSection__unlock(v6 + 32);
        if ( (v12 & 1) == 0 )
          break;
        sub_609085CC(dword_60CCEF08, dword_60CCEF0C, v16, v17);
        sead__CriticalSection__lock(v6 + 32);
        v10 = FIELD_U32(v6, 24);
        if ( v10 == v11 )
          return (int *)sead__CriticalSection__unlock(v6 + 32);
      }
    }
  }
  return result;
}
