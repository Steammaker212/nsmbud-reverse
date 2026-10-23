/* sub_608F0D5C
 * address: 0x608F0D5C   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F0D5C(int a1)
{
  _DWORD *v1; // r8
  int v3; // r11
  int result; // r0
  int v5; // r0
  _DWORD *v6; // r9
  bool v7; // zf
  _DWORD *v8; // r7
  int v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  _DWORD *v14; // r4
  void (__fastcall ***v15)(_DWORD, _DWORD *); // r0
  int v16; // r10
  _DWORD *v17; // r0
  _DWORD *v18; // r5
  int v19; // r4
  int v20; // r7
  _DWORD *v21; // r9
  int v22; // r6
  _DWORD *v23; // r4
  void (__fastcall *v24)(_DWORD *); // r1
  int v25; // r0
  _BYTE v26[16]; // [sp+4h] [bp-3Ch] BYREF
  int v27; // [sp+14h] [bp-2Ch]
  int v28; // [sp+18h] [bp-28h]

  v3 = a1 + 4;
  result = sub_60907F94(a1 + 4);
  if ( result == 1 )
  {
    v5 = FIELD_U32(a1, 148);
    if ( FIELD_S32(v5, 8) >= 1 )
    {
      v6 = *(_DWORD **)(v5 + 4);
      v7 = v6 == 0;
      if ( v6 )
      {
        v1 = v6 - 37;
        v7 = v6 == (_DWORD *)148;
      }
      if ( !v7 )
      {
        v8 = (_DWORD *)*v1;
        if ( *v1 )
        {
          if ( v8[24] == 2 )
          {
            sead__CriticalSection__lock(v3);
            if ( v8[24] != 4 )
            {
              v8[24] = 4;
              v9 = v8[16];
              if ( v9 )
              {
                v8[16] = 0;
                sead__ListNode__erase(v8 + 13);
                --FIELD_U32(v9, 8);
              }
              sub_608F0A9C(a1, (sead_ListNode *)(a1 + 76), (int)v8);
              (*(void (__fastcall **)(_DWORD *))(*v8 + 44))(v8);
            }
            sead__CriticalSection__unlock(v3);
            v10 = (_DWORD *)v1[28];
            v11 = v1 + 34;
            if ( v10 )
              *v10 = v8;
            v12 = (_DWORD *)v1[35];
            if ( v12 != v11 )
            {
              v13 = v12 + 1;
              do
              {
                v14 = (_DWORD *)*v13;
                v15 = *(void (__fastcall ****)(_DWORD, _DWORD *))(v12[2] + 32);
                if ( v15 )
                  (**v15)(v15, v8);
                v13 = v14 + 1;
                v12 = v14;
              }
              while ( v14 != v11 );
            }
            v16 = FIELD_U32(a1, 148);
            sead__ListNode__erase(v6);
            --FIELD_U32(v16, 8);
            *(v6 - 4) = &off_60C5C6EC;
            v17 = (_DWORD *)*(v6 - 2);
            if ( v17 != v11 )
            {
              v18 = (_DWORD *)*(v6 - 2);
              do
              {
                v19 = v17[2];
                v18 = (_DWORD *)v18[1];
                if ( FIELD_U8(v19, 56) )
                {
                  v20 = FIELD_U32(v19, 28);
                  if ( v20 )
                  {
                    FIELD_U32(v19, 28) = 0;
                    sead__ListNode__erase((_DWORD *)(v19 + 16));
                    --FIELD_U32(v20, 8);
                  }
                  FIELD_U8(v19, 56) = 0;
                }
                v17 = v18;
              }
              while ( v18 != v11 );
            }
            *v1 = FIELD_U32(v16, 12);
            FIELD_U32(v16, 12) = v1;
          }
        }
        else
        {
          v28 = 0;
          v27 = 0;
          TaskHeap_ref(a1, (int)v26, (int)(v1 + 1));
          v21 = sub_608F0578(a1, v1 + 1, (int)v26);
          v22 = dword_60CCEEA4;
          if ( dword_60CCEEA4 >= 1 )
          {
            v23 = v21 + 17;
            do
            {
              if ( *v23 )
                sead__SafeStringBase__operator_assign(*v23 + 16, (int)(v21 + 9));
              ++v23;
              --v22;
            }
            while ( v22 );
          }
          v24 = (void (__fastcall *)(_DWORD *))v1[32];
          if ( v24 )
            v24(v21);
          *v1 = v21;
          sead__CriticalSection__lock(v3);
          if ( !v21[24] )
          {
            v21[24] = 1;
            sub_608F0A9C(a1, (sead_ListNode *)(a1 + 52), (int)v21);
            v25 = FIELD_U32(a1, 44);
            if ( v25 )
              (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v25 + 12))(v25, 1, 1);
          }
          sead__CriticalSection__unlock(v3);
        }
      }
    }
    return sead__CriticalSection__unlock(v3);
  }
  return result;
}
