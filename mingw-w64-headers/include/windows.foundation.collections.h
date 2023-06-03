/*** Autogenerated by WIDL 8.9 from include/windows.foundation.collections.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __windows_foundation_collections_h__
#define __windows_foundation_collections_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class T>
            struct IEventHandler_impl;

            template <class T>
            struct IEventHandler : IEventHandler_impl<T> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult>
            struct IAsyncOperationCompletedHandler_impl;

            template <class TResult>
            struct IAsyncOperationCompletedHandler : IAsyncOperationCompletedHandler_impl<TResult> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult>
            struct IAsyncOperation_impl;

            template <class TResult>
            struct IAsyncOperation : IAsyncOperation_impl<TResult> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TProgress>
            struct IAsyncActionProgressHandler_impl;

            template <class TProgress>
            struct IAsyncActionProgressHandler : IAsyncActionProgressHandler_impl<TProgress> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TProgress>
            struct IAsyncActionWithProgressCompletedHandler_impl;

            template <class TProgress>
            struct IAsyncActionWithProgressCompletedHandler : IAsyncActionWithProgressCompletedHandler_impl<TProgress> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TProgress>
            struct IAsyncActionWithProgress_impl;

            template <class TProgress>
            struct IAsyncActionWithProgress : IAsyncActionWithProgress_impl<TProgress> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult, class TProgress>
            struct IAsyncOperationProgressHandler_impl;

            template <class TResult, class TProgress>
            struct IAsyncOperationProgressHandler : IAsyncOperationProgressHandler_impl<TResult, TProgress> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult, class TProgress>
            struct IAsyncOperationWithProgressCompletedHandler_impl;

            template <class TResult, class TProgress>
            struct IAsyncOperationWithProgressCompletedHandler : IAsyncOperationWithProgressCompletedHandler_impl<TResult, TProgress> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult, class TProgress>
            struct IAsyncOperationWithProgress_impl;

            template <class TResult, class TProgress>
            struct IAsyncOperationWithProgress : IAsyncOperationWithProgress_impl<TResult, TProgress> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TSender, class TArgs>
            struct ITypedEventHandler_impl;

            template <class TSender, class TArgs>
            struct ITypedEventHandler : ITypedEventHandler_impl<TSender, TArgs> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class T>
            struct IReference_impl;

            template <class T>
            struct IReference : IReference_impl<T> {};
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IIterator_impl;

                template <class T>
                struct IIterator : IIterator_impl<T> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IIterable_impl;

                template <class T>
                struct IIterable : IIterable_impl<T> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IMapChangedEventArgs_impl;

                template <class T>
                struct IMapChangedEventArgs : IMapChangedEventArgs_impl<T> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IMapChangedEventHandler_impl;

                template <class K, class V>
                struct IMapChangedEventHandler : IMapChangedEventHandler_impl<K, V> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IKeyValuePair_impl;

                template <class K, class V>
                struct IKeyValuePair : IKeyValuePair_impl<K, V> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IMapView_impl;

                template <class K, class V>
                struct IMapView : IMapView_impl<K, V> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IMap_impl;

                template <class K, class V>
                struct IMap : IMap_impl<K, V> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IObservableMap_impl;

                template <class K, class V>
                struct IObservableMap : IObservableMap_impl<K, V> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IVectorChangedEventHandler_impl;

                template <class T>
                struct IVectorChangedEventHandler : IVectorChangedEventHandler_impl<T> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IVectorView_impl;

                template <class T>
                struct IVectorView : IVectorView_impl<T> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IVector_impl;

                template <class T>
                struct IVector : IVector_impl<T> {};
            }
        }
    }
}
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IObservableVector_impl;

                template <class T>
                struct IObservableVector : IObservableVector_impl<T> {};
            }
        }
    }
}
#endif

/* Headers for imported files */

#include <inspectable.h>
#include <asyncinfo.h>
#include <windowscontracts.h>
#include <eventtoken.h>
#include <ivectorchangedeventargs.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern "C" */
namespace ABI { namespace Windows { namespace Foundation { namespace Internal {
template <class T> struct GetAbiType { typedef T type; };
template <class T> struct GetLogicalType { typedef T type; };
template <class L, class A> struct AggregateType {};
template <class L, class A> struct GetAbiType<AggregateType<L, A> > { typedef A type; };
template <class L, class A> struct GetLogicalType<AggregateType<L, A> > { typedef L type; };
}}}}
extern "C" {
#endif
#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class T>
            struct IEventHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
            public:
                typedef T T_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(IInspectable *sender,T_abi args) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult>
            struct IAsyncOperationCompletedHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TResult>::type     TResult_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TResult>::type TResult_logical;
            public:
                typedef TResult TResult_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(IAsyncOperation<TResult_logical> *info,AsyncStatus status) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult>
            struct IAsyncOperation_impl : IInspectable
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TResult>::type     TResult_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TResult>::type TResult_logical;
            public:
                typedef TResult TResult_complex;
                virtual HRESULT STDMETHODCALLTYPE put_Completed(IAsyncOperationCompletedHandler<TResult_logical> *handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE get_Completed(IAsyncOperationCompletedHandler<TResult_logical> **handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetResults(TResult_abi *results) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TProgress>
            struct IAsyncActionProgressHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TProgress>::type     TProgress_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TProgress>::type TProgress_logical;
            public:
                typedef TProgress TProgress_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(IAsyncActionWithProgress<TProgress_logical> *info,TProgress_abi progress) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TProgress>
            struct IAsyncActionWithProgressCompletedHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TProgress>::type     TProgress_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TProgress>::type TProgress_logical;
            public:
                typedef TProgress TProgress_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(IAsyncActionWithProgress<TProgress_logical> *info,AsyncStatus status) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TProgress>
            struct IAsyncActionWithProgress_impl : IInspectable
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TProgress>::type     TProgress_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TProgress>::type TProgress_logical;
            public:
                typedef TProgress TProgress_complex;
                virtual HRESULT STDMETHODCALLTYPE put_Progress(IAsyncActionProgressHandler<TProgress_logical> *handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE get_Progress(IAsyncActionProgressHandler<TProgress_logical> **handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE put_Completed(IAsyncActionWithProgressCompletedHandler<TProgress_logical> *handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE get_Completed(IAsyncActionWithProgressCompletedHandler<TProgress_logical> **handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetResults() = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult, class TProgress>
            struct IAsyncOperationProgressHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TResult>::type     TResult_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TResult>::type TResult_logical;
                typedef typename Windows::Foundation::Internal::GetAbiType<TProgress>::type     TProgress_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TProgress>::type TProgress_logical;
            public:
                typedef TResult TResult_complex;
                typedef TProgress TProgress_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(IAsyncOperationWithProgress<TResult_logical, TProgress_logical> *info,TProgress_abi progress) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult, class TProgress>
            struct IAsyncOperationWithProgressCompletedHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TResult>::type     TResult_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TResult>::type TResult_logical;
                typedef typename Windows::Foundation::Internal::GetAbiType<TProgress>::type     TProgress_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TProgress>::type TProgress_logical;
            public:
                typedef TResult TResult_complex;
                typedef TProgress TProgress_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(IAsyncOperationWithProgress<TResult_logical, TProgress_logical> *info,AsyncStatus status) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TResult, class TProgress>
            struct IAsyncOperationWithProgress_impl : IInspectable
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TResult>::type     TResult_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TResult>::type TResult_logical;
                typedef typename Windows::Foundation::Internal::GetAbiType<TProgress>::type     TProgress_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TProgress>::type TProgress_logical;
            public:
                typedef TResult TResult_complex;
                typedef TProgress TProgress_complex;
                virtual HRESULT STDMETHODCALLTYPE put_Progress(IAsyncOperationProgressHandler<TResult_logical, TProgress_logical> *handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE get_Progress(IAsyncOperationProgressHandler<TResult_logical, TProgress_logical> **handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE put_Completed(IAsyncOperationWithProgressCompletedHandler<TResult_logical, TProgress_logical> *handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE get_Completed(IAsyncOperationWithProgressCompletedHandler<TResult_logical, TProgress_logical> **handler) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetResults(TResult_abi *results) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class TSender, class TArgs>
            struct ITypedEventHandler_impl : IUnknown
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<TSender>::type     TSender_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TSender>::type TSender_logical;
                typedef typename Windows::Foundation::Internal::GetAbiType<TArgs>::type     TArgs_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<TArgs>::type TArgs_logical;
            public:
                typedef TSender TSender_complex;
                typedef TArgs TArgs_complex;
                virtual HRESULT STDMETHODCALLTYPE Invoke(TSender_abi sender,TArgs_abi args) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            template <class T>
            struct IReference_impl : IInspectable
            {
            private:
                typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
            public:
                typedef T T_complex;
                virtual HRESULT STDMETHODCALLTYPE get_Value(T_abi *value) = 0;
            };
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IIterator_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE get_Current(T_abi *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_HasCurrent(WINBOOL *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveNext(WINBOOL *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetMany(UINT32 items_size,T_abi *items,UINT32 *value) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IIterable_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE First(IIterator<T_logical> **value) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IMapChangedEventArgs_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE get_CollectionChanged(enum CollectionChange *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Key(T_abi *key) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IMapChangedEventHandler_impl : IUnknown
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<K>::type     K_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<K>::type K_logical;
                    typedef typename Windows::Foundation::Internal::GetAbiType<V>::type     V_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<V>::type V_logical;
                public:
                    typedef K K_complex;
                    typedef V V_complex;
                    virtual HRESULT STDMETHODCALLTYPE Invoke(IObservableMap<K_logical, V_logical> *sender,IMapChangedEventArgs<K_logical> *args) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IKeyValuePair_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<K>::type     K_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<K>::type K_logical;
                    typedef typename Windows::Foundation::Internal::GetAbiType<V>::type     V_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<V>::type V_logical;
                public:
                    typedef K K_complex;
                    typedef V V_complex;
                    virtual HRESULT STDMETHODCALLTYPE get_Key(K_abi *key) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Value(V_abi *value) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IMapView_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<K>::type     K_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<K>::type K_logical;
                    typedef typename Windows::Foundation::Internal::GetAbiType<V>::type     V_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<V>::type V_logical;
                public:
                    typedef K K_complex;
                    typedef V V_complex;
                    virtual HRESULT STDMETHODCALLTYPE Lookup(K_abi key,V_abi *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(unsigned int *size) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HasKey(K_abi key,boolean *found) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Split(IMapView<K_logical, V_logical> **first,IMapView<K_logical, V_logical> **second) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IMap_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<K>::type     K_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<K>::type K_logical;
                    typedef typename Windows::Foundation::Internal::GetAbiType<V>::type     V_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<V>::type V_logical;
                public:
                    typedef K K_complex;
                    typedef V V_complex;
                    virtual HRESULT STDMETHODCALLTYPE Lookup(K_abi key,V_abi *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(unsigned int *size) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HasKey(K_abi key,boolean *found) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetView(IMapView<K_logical, V_logical> **view) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Insert(K_abi key,V_abi value,boolean *replaced) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Remove(K_abi key) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear() = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class K, class V>
                struct IObservableMap_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<K>::type     K_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<K>::type K_logical;
                    typedef typename Windows::Foundation::Internal::GetAbiType<V>::type     V_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<V>::type V_logical;
                public:
                    typedef K K_complex;
                    typedef V V_complex;
                    virtual HRESULT STDMETHODCALLTYPE add_MapChanged(IMapChangedEventHandler<K_logical, V_logical> *handler,EventRegistrationToken *token) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_MapChanged(EventRegistrationToken token) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IVectorChangedEventHandler_impl : IUnknown
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE Invoke(IObservableVector<T_logical> *sender,ABI::Windows::Foundation::Collections::IVectorChangedEventArgs *args) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IVectorView_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE GetAt(UINT32 index,T_abi *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(UINT32 *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IndexOf(T_abi element,UINT32 *index,BOOLEAN *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetMany(UINT32 start_index,UINT32 items_size,T_abi *items,UINT32 *value) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IVector_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE GetAt(UINT32 index,T_abi *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE get_Size(UINT32 *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetView(IVectorView<T_logical> **value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IndexOf(T_abi element,UINT32 *index,BOOLEAN *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetAt(UINT32 index,T_abi value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE InsertAt(UINT32 index,T_abi value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveAt(UINT32 index) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Append(T_abi value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd() = 0;
                    virtual HRESULT STDMETHODCALLTYPE Clear() = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetMany(UINT32 start_index,UINT32 items_size,T_abi *items,UINT32 *value) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReplaceAll(UINT32 count,T_abi *items) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

#if defined(__cplusplus) && !defined(CINTERFACE)
} /* extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                template <class T>
                struct IObservableVector_impl : IInspectable
                {
                private:
                    typedef typename Windows::Foundation::Internal::GetAbiType<T>::type     T_abi;
                    typedef typename Windows::Foundation::Internal::GetLogicalType<T>::type T_logical;
                public:
                    typedef T T_complex;
                    virtual HRESULT STDMETHODCALLTYPE add_VectorChanged(IVectorChangedEventHandler<T_logical> *handler,EventRegistrationToken *token) = 0;
                    virtual HRESULT STDMETHODCALLTYPE remove_VectorChanged(EventRegistrationToken token) = 0;
                };
            }
        }
    }
}
extern "C" {
#endif

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __windows_foundation_collections_h__ */
