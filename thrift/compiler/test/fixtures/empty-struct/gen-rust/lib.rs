// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::type_complexity)]

pub use self::errors::*;
pub use self::types::*;

/// Thrift type definitions for `module`.
pub mod types {
    #![allow(clippy::redundant_closure)]


    #[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct Empty {
        // This field forces `..Default::default()` when instantiating this
        // struct, to make code future-proof against new fields added later to
        // the definition in Thrift. If you don't want this, add the annotation
        // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
        #[doc(hidden)]
        pub _dot_dot_Default_default: self::dot_dot::OtherFields,
    }

    #[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Debug)]
    pub enum Nada {
        UnknownField(::std::primitive::i32),
    }

    #[allow(clippy::derivable_impls)]
    impl ::std::default::Default for self::Empty {
        fn default() -> Self {
            Self {
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            }
        }
    }

    impl ::std::fmt::Debug for self::Empty {
        fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
            formatter
                .debug_struct("Empty")
                .finish()
        }
    }

    unsafe impl ::std::marker::Send for self::Empty {}
    unsafe impl ::std::marker::Sync for self::Empty {}

    impl ::fbthrift::GetTType for self::Empty {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::Empty
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("Empty");
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::Empty
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
            ];
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                _dot_dot_Default_default: self::dot_dot::OtherFields(()),
            })
        }
    }



    impl ::std::default::Default for Nada {
        fn default() -> Self {
            Self::UnknownField(-1)
        }
    }

    impl ::fbthrift::GetTType for Nada {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for Nada
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("Nada");
            match self {
                Nada::UnknownField(_) => {}
            }
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for Nada
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let once = false;
            let alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32, once) {
                    (::fbthrift::TType::Stop, _, _) => break,
                    (fty, _, false) => p.skip(fty)?,
                    (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ApplicationException::new(
                        ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                        format!(
                            "unwanted extra union {} field ty {:?} id {}",
                            "Nada",
                            badty,
                            badid,
                        ),
                    ))),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt.unwrap_or_default())
        }
    }

    mod dot_dot {
        #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
        pub struct OtherFields(pub(crate) ());

        #[allow(dead_code)] // if serde isn't being used
        pub(super) fn default_for_serde_deserialize() -> OtherFields {
            OtherFields(())
        }
    }
}

/// Error return types.
pub mod errors {
}
